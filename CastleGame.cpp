#include "CastleGame.h"


int main()
{
    // game name
    cout << endl;
    cout << " ___                 _    _                                     _              " << endl;
    cout << "|  _`\\              | |_ (_ |           /'\\_/`\\                | |             " << endl;
    cout << "| | \\_\\   _ _   ___ | ,_) | |    __     |     | _   _  _ __   _| |   __   _ __ " << endl;
    cout << "| |  _  /'_` )/',__)| |   | |  /'__`\\   | (_) || | | || '__)/'_` | /'__`\\| '__)" << endl;
    cout << "| |_/ /( (_| |\\__, \\| |_  | |  | ___/   | | | || |_| || |  ( (_| | | ___/| |   " << endl;
    cout << "|____/'`\\__,_)(____/`\\__)(___)`\\____)   |_| |_|`\\___/'|_|  `\\__,_|`\\____)|_|   " << endl;
                                                                               
                                                                               
    // ASCII castle image
    cout << endl;    
    cout << "                            . " << endl;
    cout << "                            T " << endl;
    cout << "                           ( ) " << endl;
    cout << "                          <===> " << endl;
    cout << "                           F|J " << endl;
    cout << "                           === " << endl;
    cout << "                          J|||F " << endl;
    cout << "                          F|||J " << endl;
    cout << "                         /\\/ \\/\\ " << endl;
    cout << "                         F+++++J " << endl;
    cout << "                        J{}{|}{}F         . " << endl;
    cout << "                    .   F{}{|}{}J         T " << endl;
    cout << "          .         T  J{}{}|{}{}F       ;;;" << endl;
    cout << "          T        /|\\ F/\\/\\|/\\/\\J  .   ,;;;;. " << endl;
    cout << "         /:\\     //'/|\\:=========F T . /;;;;;;\\ " << endl;
    cout << "      ./:/:/.   ///|||\\\\**********/xx\\T\\;;;;;;/  " << endl;
    cout << "     //:/:/:/\\ \\ \\\|////..[ ]...xXXXx..|====| " << endl;
    cout << "     \\:/:/:/:T7 :.:.:.:.:||[ ]|/xXXXXXx\\|||||| " << endl;
    cout << "     ::.:.:.:A. `;:;:;:;'=== ==\\XXXXXXX/=====. " << endl;
    cout << "     `;""::/ooo\\.|,|,|,| ( ) ( )| | | |.=..=.| " << endl;
    cout << "      :. :`\ooo\/(_)(_)(_) _   _ | | | |'-''-'| " << endl;
    cout << "      :T-'- :"":|""'''""|/ \\ / \\|=====|======| " << endl;
    cout << "      .A.:::| |_||,. .. || | | |/\\/\\/\\/ | | || " << endl;
    cout << "   :;:////\\:::.'.| || || ||-| |-|/\\/\\/\\+|+| | | " << endl;
    cout << "  ;:;;\\////::::,='======='=============/\/\=====. " << endl;
    cout << " :;:::;''':::::;:|__..,__|============/||\\|\\====| " << endl;
    cout << " :::::;|=:::;:;::|,;:::::          |========|   | " << endl;
    cout << " ::l42::::::(}:::::;::::::_________|========|___|__ " << endl;
    cout << endl << endl << endl;


    cout << "Description: You(Detective Darren Maczka), have been summoned to" << endl;
    cout << "Castle Burruss to investigate a rape-murder of victim Evan Islam" << endl; 
//insert more description here

//    setCurrentMap(); // Sets character default to entrance lobby

    cout << "Choose your action:" << endl;
    cout << "\t1. Check Map" << endl;
    cout << "\t2. Get current room information " << endl;
    cout << "\t3. Interact with person" << endl;
    cout << "\t4. Interact with item" << endl;
    cout << "\t5. Go to a different room" << endl;
    cout << "\t6. Use staircase" << endl;
//    cout << "2. go east" << endl;
//    cout << "3. go south" << endl;
//    currentMapinteract();

//    cout << endl;
    char playerChoice;

    int flag = 0;
    while ( flag == 0 )
    {
        cin >> playerChoice;
        if(playerChoice == '1')
        {
			getMap();           
        }
        else if(playerChoice == '2')
        {
            getCurrentRoom();
			result.getInfo();
        }
        else if(playerChoice == '3')
        {
            result.gettalk();
		}
        else if(playerChoice == '4')
        {
            result.getitem();
        }
        else if(playerChoice == '5')
        {
			displayRoomlist();
            cin >> playerChoice;
			setCurrentRoom(playerChoice);
        }
        else if(playerChoice == '6')
        {
        	if(currentFloor == '1')
        	{
        		cout << "Do you want to go to:" << endl;
        		cout << "\t1. Basement" << endl;
        		cout << "\t2. Second Floor" << endl;
        		cin >> playerChoice;
        		if(playerChoice == '1')
        		{
        			cout << "You are now in the Basement" << endl;
        		}
        		else if (playerChoice == '2')
        		{
        			cout << "You are now in the Second floor" << endl;
        		}
  			//
        	}
        	else if(currentFloor == '0')
        	{
        		cout << "You are now on the First floor" << endl;
        		
        	}
        	else if(currentFloor == '2')
        	{
        		cout << "You are now on the First floor" << endl;
        	}
        	
        }
        else
        {
            cout << "incorrect choice argument" << endl;
        }
		cout << "Choose your action:" << endl;
        cout << "\t1. Check Map" << endl;
        cout << "\t2. Get current room information " << endl;
        cout << "\t3. Interact with person" << endl;
        cout << "\t4. Interact with item" << endl;
        cout << "\t5. Go to a different room" << endl;
        cout << "\t6. Use staircase" << endl;
    }



    return 0;
	}
