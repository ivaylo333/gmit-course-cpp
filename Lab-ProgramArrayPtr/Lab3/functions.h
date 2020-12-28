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





