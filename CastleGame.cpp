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
            if(roomindex == '0')
            {
            	cout << "Police Officer: Here is the list of all suspects within the castle," << endl;
            	cout << "who do you think the murderer is?" << endl;
            	cout << "1. Stephen Cho" << endl;
            	cout << "2. Janitor Bob" << endl;
            	cout << "3. Icer Bing" << endl;
            	cout << "4. Dinh Nguyen" << endl;
            	cout << "5. Alireza Majd" << endl;
            	cout << "6. Jason Zhao" << endl;
            	cout << "7. Pedro Sorto" << endl;
            	cout << "8. Xin Gan" << endl;
            	cout << "9. Evan Islam (suicide)" << endl;
            	cout << "10. Never Mind, I haven't decided yet." << endl;
            	cin >> playerChoice;
            	if(playerChoice == '1' || playerChoice == '2' || playerChoice == '3' || playerChoice == '4' || playerChoice == '5' || playerChoice == '6' || playerChoice == '7')
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
            	}
            	else if(playerChoice == '9')
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
            	}
            	else if(playerChoice == '8')
			cout << "You watch as Xin Gan was escorted out by the police." << endl;  
			cout << "A sigh of relief in that you have stopped any further" << endl;
			cout << "deaths from occurring. Good job, you have apprehended" << endl;
			cout << "the right suspect!" << endl;
            	else
            	{
            		cout << "invalid choice" << endl;
            	}
            }
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
  			else
  			{
  				cout << "invalid choice" << endl;
  			}
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
