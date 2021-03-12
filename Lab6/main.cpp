#include <iostream>
#include<string>
#include"football_club.h"
using namespace std;

int main()
{
// Buld the football club
cout<<"*******Football club Beroe*******"<<endl;
FootballClub Beroe;
Beroe.team[1].setAll("Borislav","Mihailov","goal keeper",1);
Beroe.team[2].setAll("Ivan","Penev","Defence",2);
Beroe.team[3].setAll("Hristo","Kolev","Defence",3);
Beroe.team[4].setAll("Naiden","Gerov","Defence",4);
Beroe.team[5].setAll("Dimitar","Penkov","Defence",5);
Beroe.team[6].setAll("Ivaylo","Petrov","goal keeper",6);
Beroe.team[7].setAll("Stancho","Stoikov","Support",7);
Beroe.team[8].setAll("Ivan","Cheshmedjiev","Attacker",8);
Beroe.team[9].setAll("Hristo","Stoichkov","Attacker",9);
Beroe.team[10].setAll("Atanas","Minkov","Attacker",10);
Beroe.team[11].setAll("Vladimir","Kostov","Attacker",11);
Beroe.team[12].setAll("Luben","Geogiev","Attacker",12);
Beroe.team[13].setAll("Ivan","Ivanov","support",13);
Beroe.team[14].setAll("Petar","Sirakov","support",14);
Beroe.team[15].setAll("Trifon","Ivanov","defence",15);
Beroe.team[16].setAll("Emil","Balakov","Attacker",16);
Beroe.team[17].setAll("Kostadin","Kostadinov","Attacker",17);
Beroe.team[18].setAll("Atanas","Mangurov","defence",18);
Beroe.team[19].setAll("Rumen","Radev","Attacker",19);
Beroe.team[20].setAll("Velentin","Vatsev","Attacker",20);
// print the footbal club
for (int i=0;i<21;++i){
Beroe.team[i].printPlayerInfo();
}

//buld the team which is going to play tonight
int squadplayer1=6;
int squadplayer2=2;
int squadplayer3=20;
int squadplayer4=4;
int squadplayer5=5;
int squadplayer6=11;
int squadplayer7=7;
int squadplayer8=8;
int squadplayer9=19;
int squadplayer10=10;

Beroe.squad[1].setAll(Beroe.team[squadplayer1].getForename(),Beroe.team[squadplayer1].getSurname(),Beroe.team[squadplayer1].getPosition(),Beroe.team[squadplayer1].getNumber());
Beroe.squad[2].setAll(Beroe.team[squadplayer2].getForename(),Beroe.team[squadplayer2].getSurname(),Beroe.team[squadplayer2].getPosition(),Beroe.team[squadplayer2].getNumber());
Beroe.squad[3].setAll(Beroe.team[squadplayer3].getForename(),Beroe.team[squadplayer3].getSurname(),Beroe.team[squadplayer3].getPosition(),Beroe.team[squadplayer3].getNumber());
Beroe.squad[4].setAll(Beroe.team[squadplayer4].getForename(),Beroe.team[squadplayer4].getSurname(),Beroe.team[squadplayer4].getPosition(),Beroe.team[squadplayer4].getNumber());
Beroe.squad[5].setAll(Beroe.team[squadplayer5].getForename(),Beroe.team[squadplayer5].getSurname(),Beroe.team[squadplayer5].getPosition(),Beroe.team[squadplayer5].getNumber());
Beroe.squad[6].setAll(Beroe.team[squadplayer6].getForename(),Beroe.team[squadplayer6].getSurname(),Beroe.team[squadplayer6].getPosition(),Beroe.team[squadplayer6].getNumber());
Beroe.squad[7].setAll(Beroe.team[squadplayer7].getForename(),Beroe.team[squadplayer7].getSurname(),Beroe.team[squadplayer7].getPosition(),Beroe.team[squadplayer7].getNumber());
Beroe.squad[8].setAll(Beroe.team[squadplayer8].getForename(),Beroe.team[squadplayer8].getSurname(),Beroe.team[squadplayer8].getPosition(),Beroe.team[squadplayer8].getNumber());
Beroe.squad[9].setAll(Beroe.team[squadplayer9].getForename(),Beroe.team[squadplayer9].getSurname(),Beroe.team[squadplayer9].getPosition(),Beroe.team[squadplayer9].getNumber());
Beroe.squad[10].setAll(Beroe.team[squadplayer10].getForename(),Beroe.team[squadplayer10].getSurname(),Beroe.team[squadplayer10].getPosition(),Beroe.team[squadplayer10].getNumber());
//print the team which is going to play tonight
cout<<"*******TONIGHT GAME PLAYERS*******"<<endl;
for (int id=1;id<21;++id){
Beroe.squad[id].printPlayerInfo();
}
}


