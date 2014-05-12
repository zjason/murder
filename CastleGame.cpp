//STILL IN CONSTRUCTION DO NOT REVIEW OR ATTEMPT THIS GAME YET

int main(int argc, char *argv)
{
    // game name
    cout << endl;
    cout << " ___                 _    _                                     _              " << endl;
    cout << "(  _`\              ( )_ (_ )           /'\_/`\                ( )             " << endl;
    cout << "| ( (_)   _ _   ___ | ,_) | |    __     |     | _   _  _ __   _| |   __   _ __ " << endl;
    cout << "| |  _  /'_` )/',__)| |   | |  /'__`\   | (_) |( ) ( )( '__)/'_` | /'__`\( '__)" << endl;
    cout << "| (_( )( (_| |\__, \| |_  | | (  ___/   | | | || (_) || |  ( (_| |(  ___/| |   " << endl;
    cout << "(____/'`\__,_)(____/`\__)(___)`\____)   (_) (_)`\___/'(_)  `\__,_)`\____)(_)   " << endl;
                                                                               
                                                                               
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
    cout << "                         /\/ \/\ " << endl;
    cout << "                         F+++++J " << endl;
    cout << "                        J{}{|}{}F         . " << endl;
    cout << "                    .   F{}{|}{}J         T " << endl;
    cout << "          .         T  J{}{}|{}{}F       ;;;" << endl;
    cout << "          T        /|\ F/\/\|/\/\J  .   ,;;;;. " << endl;
    cout << "         /:\     //'/|\\:=========F T ./;;;;;;\ " << endl;
    cout << "      ./:/:/.   ///|||\\\""""""""" /x\T\;;;;;;/  " << endl;
    cout << "     //:/:/:/\  \\\\|////..[ ]...xXXXx..|====| " << endl;
    cout << "     \:/:/:/:T7 :.:.:.:.:||[ ]|/xXXXXXx\|||||| " << endl;
    cout << "     ::.:.:.:A. `;:;:;:;'=== ==\XXXXXXX/=====. " << endl;
    cout << "     `;""::/xxx\.|,|,|,| ( ) ( )| | | |.=..=.| " << endl;
    cout << "      :. :`\xxx/(_)(_)(_) _   _ | | | |'-''-'| " << endl;
    cout << "      :T-'-.:"":|""'''""|/ \ / \|=====|======| " << endl;
    cout << "      .A."''"||_||,. .. || | | |/\/\/\/ | | || " << endl;
    cout << "   :;:////\:::.'.| || || ||-| |-|/\/\/\+|+| | | " << endl;
    cout << "  ;:;;\////::::,='======='=============/\/\=====. " << endl;
    cout << " :;:::;''':::::;:|__..,__|============/||\|\====| " << endl;
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
            getmap();
            cout << "Choose your action:" << endl;
            cout << "\t1. Check Map" << endl;
            cout << "\t2. Get current room information " << endl;
            cout << "\t3. Interact with person" << endl;
            cout << "\t4. Interact with item" << endl;
            cout << "\t5. Go to a different room" << endl;
            
        }
        else if(playerChoice == '2')
        {
            Lobby.getInfo();
        }
        else if(playerChoice == '3')
        {
            
        }
        else if(playerChoice == '4')
        {
            
        }
        else if(playerChoice == '5')
        {
            
        }
        else
        {
            cout << "incorrect choice argument" << endl;
        }
    }


    return 0;

}
