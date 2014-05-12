#include "room.h"

void initRoom()
{
	
	Room Lobby( "des", "Lobby", "Police officer", "Who is the murder", "item", "itemDes");
}

void getMap()
{
    //void(int currentmap)
    if(currentmap == '1')
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
    //else if(currentmap == '2')
    //{
        
    //}
    //else
    //{
        
    //}
}
