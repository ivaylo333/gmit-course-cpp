#include<iostream>
#include<fstream>
using namespace std;
// lab info:
void labInfo(){
cout <<"Ivaylo Dimitrov\n";
cout<< "lab #3"<< endl;
}
//take numbers q2
void take_numbers(){
const int ARRAYSIZE=6;
int x[ARRAYSIZE];
//
int index=0;
cout<<"***********************************"<<endl;
cout<<"Enter 6 numbers" <<endl;

while (index<ARRAYSIZE){

int temp;
cin>>temp;

if ((temp>0)&&(temp<100)){
x[index]=temp;
index++;
}

else{

cout <<"user has enter wrong value"<<temp<<"<0> or <100> at index"<<index<<endl;
}
}
for (int i =0;i<ARRAYSIZE;++i ){

cout<<x[i]<<" "<<(&x[i]+100)<<endl;
cout<<&x[i]<<endl;
cout<<x[i]<<" =for loop"<<endl;
}
}


void cristmass_tree(int i, int j,string temp_string){
cout<<"Insert Happy_Christmas"<<endl;
cin>>temp_string;

while (temp_string=="Happy_Christmas"&& j<=5){


        int x = 5;
        int y = 1;

	for(j = 1; j <= 5; j++)
	{
	   for(i = 1; i <= x; i++)
	   {
	      cout << " ";
	   }
           x--;

	   for(i = 1; i <= y; i++)
	   {
		  cout << "*";
	   }
       y += 2;

	   cout << endl;
	}
	}
}
// create and write to file
void create_file(){

fstream my_file;
my_file.open("my_file.txt", ios::out);

if (!my_file){
cout<<"File not created";
}
else{
cout<<"File created successifuly";
int A=0;
while(A < 5){
A++;
my_file<<A;
}
my_file.close();
}

}
// read file
void read_file(){

fstream my_file;
my_file.open("my_file.txt",ios::in);

if(!my_file){
cout<<"No such file"<<endl;
}
else {
int A;
while(A<=10){
my_file>>A;
cout<<A;
if(my_file.eof())
break;
}
my_file.close();
}

}

void read_file_by_line(){
fstream infile;
infile.open("my_file.txt",ios::in);
int a, b;
while(infile>>a>>b){
cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
}

void RWF_Math_addition(){

fstream infile;
infile.open("my_file.txt",ios::in);
int a, b;
while(infile>>a>>b){
fstream my_file1;
my_file1.open("my_file1.txt",ios::out);
if (!my_file1){
cout<<"File not created";
}
else{
my_file1<<"File created successifuly";
my_file1<<a<<"*"<<b<<"="<<a*b<<endl;
}
my_file1.close();
}



}





