class labInfo{
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
};
