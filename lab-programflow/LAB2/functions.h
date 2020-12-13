
#include <iostream>
using namespace std;
//greeting function
void helloFinction(){
    cout<< "Ivaylo Dimitrov\n";
    cout<< "Lab #2"<< endl;
}
// return the largest number
int return_Largest(int number1,int number2){
cin>> number1;
cin>> number2;

if (number1>number2){

    cout<<"The largest value is "<<number1;
}
    else{
        cout<<"The largerst valuse is"<<number2;
    }
return 0;
}

//function that checks the user has input number between 1 and 100

int check_input_1to100( int NuM){
cin>>NuM;

if (NuM>=1 && NuM<=100){
 cout<<"User Number "<<NuM<<"in the rage 1 to 100"<<endl;
 }
    else{
 cout<<"User Number "<<NuM<<" NOT in the rage 1 to 100"<<endl;

 }

return 0;
}

// calculate area of a circle

float circle_area(float radius){
cin>>radius;

int area=radius*radius*3.14159;
cout<<"the area of the circle is "<<area<<endl;

return 0;

}


// calculate area of a rectangle

float rectangle_area(float side_A,float side_B){
cin>>side_A;
cin>>side_B;

int area=side_A*side_B;
cout<<"the area of the rectangle is "<<area<<endl;

return 0;

}
// temp and humidity
int temp_humidity_alarm(int temperature, int humidity){
cout<<"insert temperature"<<endl;
cin>>temperature;
    if (temperature>=95){
cout<<"ALARM temperature is higher then 95"<<endl;

}
cout<<"insert humidity\n"<<endl;
cin>>humidity;
    if (humidity>=90){
cout<<"ALARM humidity is higher then 90"<<endl;

}
return 0;
}

// temperature conversion

float temperature_celsius(float celsius){

cin>>celsius;

float fahrenheit=(celsius* 9/5) + 32;

cout<<"temperature in Fahrenheit is "<<fahrenheit<<endl;

return 0;

}
//find even numbers from 0 to 1000
void EvenNumbers(int NUMS)
{

    cout << "Even Numbers are: ";
    for (int i = 1; i <= NUMS; i++) {

        if (i % 2 == 0)
            cout << i << " ";
    }
}

// find all odd numbers between values


void OddNumbers(int NUM_1, int NUM_2){
cin>>NUM_1;
cin>>NUM_2;

    cout << "ODD Numbers are: ";
    for (int i = NUM_1; i <= NUM_2; i++) {

        if (i % 2 != 0)
            cout << i << " ";
    }
}
// FNC1
void FNC_1(){

int i=5;
while (i < 10){
 cout<<i<<endl;
 i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20)
{
 sum = sum + i;
 i = i + 1;
}
cout << "The sum = "<<sum<<endl;
/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
cout<< "Enter grade (-1 to end): "; // prompt user for grade
int grade=0;
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0)
 cout << "Average is " << (double) sum / count;

}
