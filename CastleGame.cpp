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
    cout << " ::[ ]::::::(}:::::;::::::_________|========|___|__ " << endl;
    cout << endl << endl << endl;


    cout << "Description: You(Detective Darren Maczka), have been summoned to" << endl;
    cout << "Castle Burruss to investigate a rape-murder of victim Evan Islam." << endl;
	cout << "As soon as the murder occurred, someone had notified the police " << endl;
	cout << "so they were able to quarantine the castle before the murderer " << endl;
	cout << "could escape." << endl;
	cout << "Mission: Your job is to investigate the castle and find clues to" << endl;
	cout << "the finding the culprit. Time is of the essence. Find the killer" << endl;
	cout << "and stop any further deaths from occurring!" << endl;
	cout << endl << endl << endl;
	cout << "Current Location: Lobby" << endl;
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
		cout << endl;
		cout << "user input: ";
        cin >> playerChoice;
		cout << "-----------------------------------------------------" << endl;
        if(playerChoice == '1')
        {
			getMap();           
        }
        else if(playerChoice == '2')
        {
            chooseRoom();
			result.getInfo();
        }
        else if(playerChoice == '3')
		{
            result.gettalk();
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
            	cout << "j. Never Mind, I haven't decided yet." << endl;
            	cin >> playerChoice;
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
			cout << "user input: ";
            cin >> playerChoice;
			setCurrentRoom(playerChoice);
        }
		else if(playerChoice == '6')
		{
			if(currentFloor == '1')
        	{
        		cout << "Do you want to go to:" << endl;
        		cout << "\t1. Basement" << endl;
        		cout << "\t2. Second Floor" << endl << endl;
        		cin >> playerChoice;
				cout << "-----------------------------------------------------" << endl;
        		if(playerChoice == '1')
        		{
					changeFloor('0');
        			cout << "You are now in the Basement" << endl;
					setCurrentRoom('0');
        		}
        		else if (playerChoice == '2')
        		{
					changeFloor('2');
        			cout << "You are now in the Second floor" << endl;
					setCurrentRoom('0');
        		}
  			//
        	}
        	else if(currentFloor == '0')
        	{
				changeFloor('1');
        		cout << "You are now on the First floor" << endl;
        		setCurrentRoom('0');
        	}
        	else if(currentFloor == '2')
        	{
				changeFloor('1');
        		cout << "You are now on the First floor" << endl;
				setCurrentRoom('0');
        	}
		}
        else
        {
            cout << "incorrect choice argument" << endl;
        }
		if(flag == 0)
		{
		cout << "Choose your action:" << endl;
        cout << "\t1. Check Map" << endl;
        cout << "\t2. Get current room information " << endl;
        cout << "\t3. Interact with person" << endl;
        cout << "\t4. Interact with item" << endl;
        cout << "\t5. Go to a different room" << endl;
		cout << "\t6. Use staircase" << endl;
		}
    }



    return 0;
}
