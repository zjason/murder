#include "room.h"
#include <string>
#include <iostream>
using namespace std;

char roomindex = '0';	
char currentFloor = '1';

Room Lobby( "Room description: This is the lobby, police officer is here waiting for you answer...", "Room name: Lobby", "Person: Police Officer", "Police Officer: 'Well, this is a really weird case. Who is the murderer? what do you think..'", "Item: BaseStair", "Info: Staircase to basement");
Room FirstHallway( "Room description: This is the First Hallway." , "Room name: First Hallway", "", "", "Item: There is nothing here.", "Info: Come on, it's nothing!" );
Room Room1("Room description: This is Icer's room, Icer is Always on Skype talking with his girlfriend or practicing dance routine for culture", "Room name: Room1", "Person: Icer", "Icer: 'Sorry I was in a skype session with my girlfriend during the time of the murder.  We did hear a man screaming during our skype session which startled my girlfriend a little. My girlfriend never really liked Evan though.'", "Item: Icer's laptop", "Info: Don't you ever look up Icer's laptop");
Room Room2("Room description: This is Dinh's room, Dinh is sleepy lazy gamer", "Room name: Room2", "Person: Dinh", "Dinh: 'Killer? I was sleeping when the murder happened because I usually stay up all night going around the room staring at random things until morning. The janitor really creeps me out though. He likes to walk around the hallways at night with his tattered coat.'", "Item: Condom", "A freshly used condom");
Room Room3("Room description: This is a empty room", "Room name: Room3", "Person: No one is here", "", "", "");
Room BathRoom("Room description: This is bathroom. There is a foreigner in here who only speaks Mandarin", "Room name: BathRoom", "Person: Xin", "Xin: 'Ta ma de ，wo shi xiong shou. ni yao bu zhua wo，wo jiu sha le ni'", "Item: Toilet", "Info: That's sick, you check on that.");
Room StudyRoom("Room description: This is study room, Ali is workink on something..", "Room name: Study Room", "Person: Ali", "Ali: 'Can't talk now, I'm on a strict deadline for this project. I'm building a timer to set off a delayed fire...for no evil means I swear.'", "Item: There is nothing here.", "Info: nothing!");
Room Kitchen("Room description: This is a big kicken, smells bad, no one is in here", "Room name: Kitchen", "Person: No one is here.", "", "Item: UpStair", "Info: Staircase to the upper floor.");
Room result;

void getCurrentRoom()
{
	if (roomindex == '0' )
	{
		result = Lobby;
	}
	else if (roomindex == '1')
	{
		result = Room1;
	}
	else if (roomindex == '2')
	{
		result = Room2;
	}
	else if (roomindex == '3')
	{
		result = Room3;
	}
	else if (roomindex == '4')
	{
		result = StudyRoom;
	}
	else if (roomindex == '5')
	{
		result = BathRoom;
	}
	else if (roomindex == '6')
	{
		result = Kitchen;
	}
}

void setCurrentRoom(char a)
{
	roomindex = a;
}

void getMap(char floor)
{
    if(floor == '1')
    {
    cout <<"                                                     N        " << endl;
    cout <<"                                                     |        " << endl;
    cout <<"                                                 W---+---E    " << endl;
    cout <<"                                                     |        " << endl;
    cout <<"                                     First Floor     S        " << endl;
    cout <<"              {Base Stair}                                    " << endl;
    cout <<"              {__________}                                    " << endl;
    cout <<"              {__________}                                    " << endl;
    cout <<"              ~~~~~  ~~~~~                                    " << endl;
    cout <<"               ====  =====                         ========== " << endl;
    cout <<"              |           |====================== |          |" << endl;
    cout <<"              |           |           |           |          |" << endl;
    cout <<"              |           |  Room1    |   Room3   |          |" << endl;
    cout <<"              |           |   (1)     |   (3)     |          |" << endl;
    cout <<"              |    @@@    |   Icer    |===== =====|          |" << endl;
    cout <<"              |           |           |           |          |" << endl;
    cout <<"              |   Lobby    ==== ======|   Study      Kitchen |" << endl;
    cout <<"              |    (0)    First Hallway    Room       (6)    |" << endl;
    cout <<"              |            ==== ======|     (4)              |" << endl;
    cout <<"              |  Police   |           |   Alireza |          |" << endl;
    cout <<"              |           |  Room2    |===== ==== |          |" << endl;
    cout <<"              |           |   (2)     | BathRoom  |          |" << endl;
    cout <<"              |           |   Dinh    |   Xin (5) |          |" << endl;
    cout <<"               ==========  =========== ==========  ==========|" << endl;
    cout <<"              				                      {__________}" << endl;
    cout <<"              				                      {2nd  Stair}" << endl;
    cout <<"              				                      {__________}" << endl;
    cout <<"              				                      ~~~~~~~~~~~~" << endl;
    }
    else if(floor == '0')
    {
    cout <<"                                                      N	  " << endl;	  
    cout <<"                                                	  | 	  " << endl;
    cout <<"	      {1st  Stair}                            W---+---E	  " << endl;
    cout <<"          {__________}            	Basement          |	  " << endl;
    cout <<"          {__________}                                S	  " << endl;
    cout <<"          ~~~~~~~~~~~~					  " << endl;
    cout <<"           ===========                      ==========	  " << endl;
    cout <<"          |           |====================|          |	  " << endl;
    cout <<"          |           |                    |  Boiler  | 	  " << endl;
    cout <<"          |           |       Vault        |   Room   |	  " << endl;
    cout <<"          |   Game    |        $$$         |   (10)   | 	  " << endl;
    cout <<"          |   Room    |        (8)         |      ~   |	  " << endl;
    cout <<"          |    (7)     ====================      ~    |	  " << endl;
    cout <<"          |   ****          Base Hallway       (__)   |	  " << endl;
    cout <<"          |            ========  ==========           |	  " << endl;
    cout <<"          |           |                    |          |	  " << endl;
    cout <<"          |           |    Storeage Room   |   Bob    |	  " << endl;
    cout <<"          |           |        (9)         |          |	  " << endl;
    cout <<"           ====  ====  ==================== ==========	  " << endl; 
    }
    else if(floor == '2')
    {
    cout <<"                                                      N	  " << endl;
    cout <<"                                                      |	  " << endl;
    cout <<"                                                  W---+---E   " << endl;
    cout <<"                             2nd Floor                |	  " << endl;
    cout <<"                                                      S       " << endl;
    cout <<"           ===========					  " << endl;                      
    cout <<"          |           |======================= |              " << endl;
    cout <<"          |           |            |           |		  " << endl;          
    cout <<"          |           |   Room5    |   Room7   |		  " << endl;          
    cout <<"          |           |            |     X     |		  " << endl;          
    cout <<"          |           |            |===========|==========|   " << endl;
    cout <<"          |           |            |           |          |   " << endl;
    cout <<"          |  Balcony   ====  ======|common Room           |   " << endl;
    cout <<"          |    ###    Second Hallway                      |	  " << endl;
    cout <<"          |            ============|    Cho       Library |   " << endl;
    cout <<"          |           |     X       ====  =====|   Zhao   |   " << endl;
    cout <<"          |           |            |           |          |   " << endl;
    cout <<"          |           |   Room6    |   Room8   |==========|   " << endl;
    cout <<"          |           |            |   Evan    |{_________}   " << endl;                
    cout <<"           ==========  ========================={_________}   " << endl;
    cout <<"						                        {2nd Stair}	  " << endl;
}		

void displayRoomlist()
{
	if(currentFloor == '1')
	{
	cout << "Where would you like to go?" << endl;
	cout << "0. Lobby" << endl;
	cout << "1. Room 1" << endl;
	cout << "2. Room 2"<< endl;
	cout << "3. Room 3" << endl;
	cout << "4. Study Room" << endl;
	cout << "5. Bathroom" << endl;
	cout << "6. Kitchen" << endl;
	}
	else if (currentFloor == '0')
	{
	cout << "Where would you like to go?" << endl;
	cout << "7. Game Room" << endl;
	}
}
