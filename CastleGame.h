#include "room.h"
#include <string>
#include <iostream>

using namespace std;
int roomindex;	
Room Lobby( "This is the lobby, police officer is here waiting for you answer...", "Lobby", "Police officer", "Well, this is a really weird case. Who is the murderer? what do you think..", "", "");
Room FirstHallway("This is the First Hallway.", "First Hallway", "", "", "" );
Room Room1("This is Icer's room, Icer is Always on Skype talking with his girlfriend or practicing dance routine for culture", "Room1", "Icer", "Sorry I was in a skype session with my girlfriend during the time of the murder.  We did hear a man screaming during our skype session which startled my girlfriend a little. My girlfriend never really liked Evan though.", "", "");
Room Room2("This is Dinh's room, Dinh is sleepy lazy gamer", "Room2", "Dinh", "Killer? I was sleeping when the murder happened because I usually stay up all night going around the room staring at random things until morning. The janitor really creeps me out though. He likes to walk around the hallways at night with his tattered coat.", "Condom", "A freshly used condom");
Room Room3("This is a empty room", "Room3", "", "", "", "");
Room BathRoom("This is bathroom, wait! why Xin is HERE?? He only speaks mandarin.", "BathRoom", "Xin", "他妈的，我是凶手。你要现在要不抓我，我就杀了你", "", "");
Room StudyRoom("This is study room, Ali is workink on something..", "Study Room", "Ali", "Can't talk now, I'm on a strict deadline for this project. I'm building a timer to set off a delayed fire...for no evil means I swear.", "", "");
Room Kitchen("This is a big kicken, smells bad, no one is in here", "Kitchen", "", "", "", "");


<<<<<<< HEAD
Room getCurrentRoom()
{
	Room result;
	if (roomindex == 0 )
	{
		result = Lobby;
	}
	else if (roomindex == 1)
	{
		result = Room1;
	}
	else if (roomindex == 2)
	{
		result = Room2;
	}
	else if (roomindex == 3)
	{
		result = Room3;
	}
	else if (roomindex == 4)
	{
		result = StudyRoom;
	}
	else if (roomindex == 5)
	{
		result = BathRoom;
	}
	else if (roomindex == 6)
	{
		result = Kitchen;
	}
	return result;
}

void setCurrentRoom(int a)
{
	roomindex = a;
}

void getMap()
{
                                                 
    cout <<"                                                     N        " << endl;
    cout <<"                                                     |        " << endl;
    cout <<"                                                 W---+---E    " << endl;
    cout <<"                                                     |        " << endl;
    cout <<"                                                     S        " << endl;
    cout <<"              {Base Stair}                                    " << endl;
    cout <<"              {          }                                    " << endl;
    cout <<"              {          }                                    " << endl;
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
    cout <<"              {          }                                    " << endl;
    cout <<"              {2nd  Stair}                                    " << endl;
    cout <<"              {          }                                    " << endl;
    cout <<"              ~~~~~~~~~~~~                                    " << endl;
    
}

