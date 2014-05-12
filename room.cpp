#include "room.h"

Room::Room()
{
	des = "";
	name = "";
	character = "";
	talk = "";
	item = "";
	itemDes = "";
}

Room::Room(string des, string character, string name, string talk, string item, string itemDes)
{
	this->des = des;
	this->character = character;
	this->name = name;
	this->talk = talk;
	this->item = item;
	this->itemDes = itemDes;
}

void Room::getInfo()
{
	cout << name << endl;
	cout << des << endl;
	cout << character << endl;
	cout << item << endl;
}

void Room::gettalk()
{
	cout << talk << endl;
}

void Room::getitem()
{
	cout << itemDes << endl;
}