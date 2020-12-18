#include<iostream>
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

cout<<x[i]<<" "<<endl;
cout<<&x[i]<<endl;
cout<<x[i]<<" =for loop"<<endl;
}
}


