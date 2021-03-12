#include"football_club.h"
#include<iostream>
#include<string>

using namespace std;
//constructor
FootballClub::FootballClub(){
    this->clubname="name";
    this->district="district";
    this->stripColour="Strip Colour";
    //cout<<"contructor called"<<endl;
}
//set
void FootballClub::setClubname(string clubname){
this->clubname=clubname;
}
void FootballClub::setdistrict(string district){
this->district=district;
}
void FootballClub::setstripColour(string stripColour){
this->stripColour=stripColour;
}
//get
string FootballClub::getClubname(){
return clubname;
}
string FootballClub::getdistrict(){
return district;
}

string FootballClub::getstripColour(){
return stripColour;
}
//print
void FootballClub::printInfo(){
cout<<clubname<<endl;
cout<< district<<endl;
cout<<stripColour<<endl;

}
