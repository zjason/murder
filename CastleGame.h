#include "room.h"
#include <string>
#include <iostream>
using namespace std;

char playerChoice;

int flag = 0;
char roomindex = '0';	
char currentFloor = '1';

//Room FirstHallway( "Room description: This is the First Hallway." , "Room name: First Hallway", "", "", "", "" );
//Lobby
Room Lobby( "Room description: This is the lobby, police officer is here waiting for you answer...", "Room name: Lobby", "Person: Police Officer", "Police Officer: 'Well, this is a really weird case. Who is the murderer? '", "Item: BaseStair", "Info: Staircase to basement");
Room Room1("Room description: This is Icer's room, Icer is Always on Skype talking with his girlfriend or practicing dance routine for culture", "Room name: Icer's Room", "Person: Icer", "Icer: 'Sorry I was in a skype session with my girlfriend during the time of the murder.  We did hear a man screaming during our skype session which startled my girlfriend a little. My girlfriend never really liked Evan though.'", "Item: Icer's laptop", "Info: Don't you ever look up Icer's laptop");
Room Room2("Room description: This is Dinh's room, Dinh is sleepy lazy gamer", "Room name: Dinh's Room", "Person: Dinh", "Dinh: 'Killer? I was sleeping when the murder happened because I usually stay up all night going around the room staring at random things until morning. The janitor really creeps me out though. He likes to walk around the hallways at night with his tattered coat.'", "Item: Condom", "A freshly used condom");
Room Room3("Room description: This is a empty room", "Room name: Room3", "Person: No one is here", "", "", "");
Room BathRoom("Room description: This is bathroom. There is a foreigner in here who only speaks Mandarin", "Room name: BathRoom", "Person: Xin", "Xin: 'Ta ma de ，wo shi xiong shou. ni yao bu zhua wo，wo jiu sha le ni'", "Item: Toilet", "Info: That's sick, you check on that.");
Room StudyRoom("Room description: This is study room, Ali is workink on something..", "Room name: Study Room", "Person: Ali", "Ali: 'Can't talk now, I'm on a strict deadline for this project. I'm building a timer to set off a delayed fire...for no evil means I swear.'", "Item: There is nothing here.", "Info: nothing!");
Room Kitchen("Room description: This is a big kicken, smells bad, no one is in here", "Room name: Kitchen", "Person: No one is here.", "", "Item: UpStair", "Info: Staircase to the upper floor.");
//Basement
Room GameRoom("Room description: This is the nice game room with a fancy billiards table, but no one is here, guess everyone is busy.", "Room name: Game Room", "Person: No one is here.", "", "Item: Billiards table", "Info: Nice and fancy table.");
Room Vault("Room description: This is a big vault, looks very old with spider net all over it. must be the castle owner's. Locked anyway", "Room name: Vault", "Person: no one is here.", "", "Item: lock", "Info: Rusty lock, could not open");
Room BoilerRoom("Room description: This is boiler room, janitor Bob is here, he looks so weird", "Room name: Boiler Room", "Person: Janitor Bob", "'what a 'cold' case this is huh.  I was fixing the heater earlier today and Pedro dropped by with these boots.'", "Item: Bloody boots", "Info: Blood stains are on the boots.");
Room StorageRoom("Room description: This is Storage room, boxes here.", "Room name: Storage Room", "Person: no one is here", "", "Item: boxes", "Info: Some old used clothes");
Room result;

void getCurrentRoom1()
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

void getCurrentRoom0()
{
	if (roomindex == '0' )
	{
		result = GameRoom;
	}
	else if (roomindex == '1')
	{
		result = Vault;
	}
	else if (roomindex == '2')
	{
		result = StorageRoom;
	}
	else if (roomindex == '3')
	{
		result = BoilerRoom;
	}
}
/*
void getCurrentRoom2()
{
	if (roomindex == '0' )
	{
		result = Library;
	}
	else if (roomindex == '1')
	{
		result = Bolcony;
	}
	else if (roomindex == '2')
	{
		result =  ;
	}
	else if (roomindex == '3')
	{
		result =  ;
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
*/

void chooseRoom()
{
	if (currentFloor == '0')
	{
		getCurrentRoom0();
	}
	else if (currentFloor == '1')
	{
		getCurrentRoom1();
	}
	else
	{
		//getCurrentRoom2();
	}
}

void setCurrentRoom(char a)
{
	roomindex = a;
}

void getMap()
{
    if(currentFloor == '1')
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
    cout <<"              |           |           |           |          |" << endl;
    cout <<"              |    @@@    |   Icer    |===== =====|          |" << endl;
    cout <<"              |           |           |           |          |" << endl;
    cout <<"              |   Lobby    ==== ======|   Study      Kitchen |" << endl;
    cout <<"              |           First Hallway    Room              |" << endl;
    cout <<"              |            ==== ======|                      |" << endl;
    cout <<"              |  Police   |           |   Alireza |          |" << endl;
    cout <<"              |           |  Room2    |===== ==== |          |" << endl;
    cout <<"              |           |           | BathRoom  |          |" << endl;
    cout <<"              |           |   Dinh    |   Xin     |          |" << endl;
    cout <<"               ==========  =========== ==========  ==========|" << endl;
    cout <<"                                                  {__________}" << endl;
    cout <<"                                                  {2nd  Stair}" << endl;
    cout <<"                                                  {__________}" << endl;
    cout <<"                                                  ~~~~~~~~~~~~" << endl;
    }
    else if(currentFloor == '0')
    {
    cout <<"                                                      N       " << endl;	  
    cout <<"                                                      |       " << endl;
    cout <<"          {1st  Stair}                            W---+---E   " << endl;
    cout <<"          {__________}              Basement          |       " << endl;
    cout <<"          {__________}                                S       " << endl;
    cout <<"          ~~~~~~~~~~~~					  " << endl;
    cout <<"           ===========                      ==========	  " << endl;
    cout <<"          |           |====================|          |	  " << endl;
    cout <<"          |           |                    |  Boiler  | 	  " << endl;
    cout <<"          |           |       Vault        |   Room   |	  " << endl;
    cout <<"          |   Game    |        $$$         |          | 	  " << endl;
    cout <<"          |   Room    |                    |      ~   |	  " << endl;
    cout <<"          |            ====================      ~    |	  " << endl;
    cout <<"          |   ****          Base Hallway       (__)   |	  " << endl;
    cout <<"          |            ========  ==========           |	  " << endl;
    cout <<"          |           |                    |          |	  " << endl;
    cout <<"          |           |    Storeage Room   |   Bob    |	  " << endl;
    cout <<"          |           |                    |          |	  " << endl;
    cout <<"           ====  ====  ==================== ==========	  " << endl;  
    }
    else if(currentFloor == '2')
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
    cout <<"                                                {2nd Stair}	  " << endl;
    }		
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
	cout << "0. Game Room" << endl;
	cout << "1. Vault" << endl;
	cout << "2. Storage Room" << endl;
	cout << "3. Boiler Room" << endl;
	}
	else if(currentFloor == '2')
	{
	cout << "Where would you like to go?" << endl;
	cout << "0. Library" << endl;
	cout << "1. Balcony" << endl;
	cout << "2. Room 5" << endl;
	cout << "3. Room 6" << endl;
	cout << "4. Room 7" << endl;
	cout << "5. Room 8" << endl;
	cout << "6. Common Room" << endl;
	}
}

void changeFloor(char f)
{
	currentFloor = f;
}

void error()
{
	cout << "incorrect choice argument" << endl;
    cout << "please press another input" << endl << endl;
}

void policeCheck()
{
     if (currentFloor == '1')
    {
	if(roomindex == '0')
            {
            	cout << "Police Officer: Here is the list of all suspects within the castle," << endl;
            	cout << "who do you think the murderer is?" << endl;
            	cout << "a. Stephen Cho" << endl;
            	cout << "b. Janitor Bob" << endl;
            	cout << "c. Icer Bing" << endl;
            	cout << "d. Dinh Nguyen" << endl;
            	cout << "e. Alireza Majd" << endl;
            	cout << "f. Jason Zhao" << endl;
            	cout << "g. Pedro Sorto" << endl;
            	cout << "h. Xin Gan" << endl;
            	cout << "i. Evan Islam (suicide)" << endl;
            	cout << "j. Never Mind, I haven't decided yet." << endl << endl;
            	cout << "user input: ";
                cin >> playerChoice;
		        cout << "-----------------------------------------------------" << endl;
            	if(playerChoice == 'a' || playerChoice == 'b' || playerChoice == 'c' || playerChoice == 'd' || playerChoice == 'e' || playerChoice == 'f' || playerChoice == 'g')
            	{
            		cout << "You watch as the suspect was escorted out by the police." << endl;
            		cout << "Someone suddenly runs up to you and stabs you from behind. As you lay" << endl;
            		cout << "on the ground in shock and losing conciousness, you watch as the real" << endl;
            		cout << "murderer walks over you and out the front door." << endl;
			cout << " ___    _____  _   _  ____      _____ __  __  ___    ____   " << endl;
			cout << "|  _`\\ /  _  \\/ \\_/ \\|  _`\\    |  _  || | | ||  _`\\ |  _`\\ " << endl;
			cout << "| | \\_|| (_) ||     || |_`_|   | | | || | | || |_`_|| (_) | " << endl;
			cout << "| |___ |  _  || (_) ||  _|_    | | | || | | ||  _|_ | ,  / " << endl;
			cout << "| |_, || | | || | | || |_, |   | |_| || \\_/ || |_, || |\\ \\ " << endl;
			cout << "|____/'|_| |_||_| |_||____/'   |_____|`\\___/'|____/'|_| \\_\\" << endl;
            		cout << "You did not find the real murderer." << endl;
					flag = 1;
            	}
            	else if(playerChoice == 'i')
            	{
            		cout << "You watch as the police left the vicinity." << endl;
            		cout << "Someone suddenly runs up to you and stabs you from behind. As you lay" << endl;
            		cout << "on the ground in shock and losing conciousness, you watch as the real" << endl;
            		cout << "murderer walks over you and out the front door." << endl;
			cout << " ___    _____  _   _  ____      _____ __  __  ___    ____   " << endl;
			cout << "|  _`\\ /  _  \\/ \\_/ \\|  _`\\    |  _  || | | ||  _`\\ |  _`\\ " << endl;
			cout << "| | \\_|| (_) ||     || |_`_|   | | | || | | || |_`_|| (_) | " << endl;
			cout << "| |___ |  _  || (_) ||  _|_    | | | || | | ||  _|_ | ,  / " << endl;
			cout << "| |_, || | | || | | || |_, |   | |_| || \\_/ || |_, || |\\ \\ " << endl;
			cout << "|____/'|_| |_||_| |_||____/'   |_____|`\\___/'|____/'|_| \\_\\" << endl;
            		cout << "You did not find the real murderer." << endl;
					flag = 1;
            	}
            	else if(playerChoice == 'h')
				{
			cout << "You watch as Xin Gan was escorted out by the police." << endl;  
			cout << "A sigh of relief in that you have stopped any further" << endl;
			cout << "deaths from occurring. Good job, you have apprehended" << endl;
			cout << "the right suspect!" << endl;
			cout << " _   _  _  ___   _____  _____  ___    _     _ " << endl;
			cout << "| | | || ||  _`\\|_   _||  _  ||  _`\\ \\ \\   / /" << endl;
			cout << "| | | || || | \\_\\ | |  | | | || |_| | \\ \\_/ / " << endl;
			cout << "| | | || || |  _  | |  | | | || ,  /   \\   /  " << endl;  
			cout << "| \\_/ || || |_/ / | |  | |_| || |\\ \\    | |   " << endl;   
			cout << " \\___/ |_||____/' |_|  |_____||_| \\_\\   |_|   " << endl;   
			flag = 1;
				}
            	else if(playerChoice == 'j')
            	{
            	}
            	else
            	{
            	   error();
            	}
            }
     }
}

void roomlistError()
{
	if (currentFloor == '0')
	{
		if (playerChoice == '0' || playerChoice == '1' || playerChoice == '2' || playerChoice == '3')
		{			
			setCurrentRoom(playerChoice);
			chooseRoom();
			result.getInfo();
		}
		else
		{
			error();
		}
	}
	else if (currentFloor == '1')
	{
		if (playerChoice == '0' || playerChoice == '1' || playerChoice == '2' || playerChoice == '3' || playerChoice == '4'
			|| playerChoice == '5' || playerChoice == '6')
		{
			setCurrentRoom(playerChoice);
			chooseRoom();
			result.getInfo();
		}
		else
		{
			error();
		}
	}
}
