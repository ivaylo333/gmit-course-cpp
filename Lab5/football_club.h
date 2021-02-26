
#include<iostream>
#include<string>
using namespace std;

class FootballClub{
private:
string clubname;
string district;
string stripColour;
public:
//constructor
FootballClub(){
    this->clubname="name";
    this->district="district";
    this->stripColour="Strip Colour";
    //cout<<"contructor called"<<endl;
}
//set
void setClubname(string clubname){
this->clubname=clubname;
}
void setdistrict(string district){
this->district=district;
}
void setstripColour(string stripColour){
this->stripColour=stripColour;
}
//get
string getClubname(){
return clubname;
}
string getdistrict(){
return district;
}

string getstripColour(){
return stripColour;
}
//print
void printInfo(){
cout<<clubname<<endl;
cout<< district<<endl;
cout<<stripColour<<endl;

}

};
