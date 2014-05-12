#include "room.h"

Room::Room()
{
	des = "";
	name = "";
	character = "";
	talk = "";
}

Room::Room(string des, string character, string name, string talk)
{
	this->des = des;
	this->character = character;
	this->name = name;
	this->talk = talk;
}

void Room::getInfo()
{
	cout << name << endl;
	cout << des << endl;
	cout << character << endl;
}

void Room::gettalk()
{
	cout << talk << endl;
}