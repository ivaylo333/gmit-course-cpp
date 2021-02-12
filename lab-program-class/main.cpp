#include <iostream>
#include"functions.h"
#include"labInfo.h"
#include<string>

using namespace std;
// class for storing lab information
/*class labInfo{
private:
int day_val=0;
int month_val=0;
int year_val=0;

public:
string Name;
int LabID=0;
void setdate(int day,int month,int year){
day_val=day;
month_val=month;
year_val=year;
}

void printInfo(){
cout<<Name<<endl;
cout<<"Lab"<<LabID<<endl;
cout<<"Date"<<day_val<<":"<<month_val<<":"<<year_val<<endl;
}
};*/

int main()
{
    LabInfo();
    labInfo labInfo1;
    labInfo1.Name="Ivaylo Dimitrov";
    labInfo1.LabID=1;
    labInfo1.setdate(12,2,2021);
    labInfo1.printInfo();

}

