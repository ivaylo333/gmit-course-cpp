#include<iostream>
#include<string>
using namespace std;

class Player{
private:
string forename;
string surname;
string position;
int number;

public:
Player(){
    this->forename="name";
    this->surname="surname";
    this->position="position";
    this->number=0;
    //cout<<"contructor called"<<endl;
}

string getForename(){
return forename;
};
string getSurname(){
return surname;
};
string getPosition(){
return position;
};
int getNumber(){
return number;
};

void setAll(string forename, string surname,string position,int number){
this->forename=forename;
this->surname=surname;
this->position=position;
this->number=number;
}


void printPlayerInfo(){
cout<<forename<<endl;
cout<<surname<<endl;
cout<<position<<endl;
cout<<number<<endl;
}


};
