#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Room
{
private:
	string des;
	string name;
	string character;
	string talk;
	string item;
	string itemDes;

public:
	Room();
	Room( string des, string name, string character, string talk, string item, string itemDes);
	void getInfo();
	void gettalk();
	void getitem();

}

#endif