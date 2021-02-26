#include <iostream>
#include<string>
#include"football_club.h"
#include"player.h"
using namespace std;

int main()
{
FootballClub obj;
obj.setClubname("Beroe");
obj.setdistrict("StaraZagora");
obj.setstripColour("green");
obj.printInfo();

Player obj1;
obj1.setAll("Hristo","Stoichkov","attack",9);
obj1.printPlayerInfo();

}


