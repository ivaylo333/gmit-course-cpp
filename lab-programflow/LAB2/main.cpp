#include <iostream>
#include"functions.h"
int number1=0;
int number2=0;
using namespace std;


int main()
{
    helloFinction();
    cout<<"Return the largest number"<<endl;
    return_Largest(1,2);
    cout<<"Check input range from 1 to 100"<<endl;
    check_input_1to100(1);
    cout<<"Calculate area of a circle"<<endl;
    circle_area(1);
    cout<<"Calculate area of a rectangle"<<endl;
    rectangle_area(1,2);
    cout<<"Alarm check for temperature and humidity"<<endl;
    temp_humidity_alarm(1,2);
    cout<<"temperature conversion"<<endl;
    temperature_celsius(1);
    cout<<"Even Numbers between 1 and 1000"<<endl;
    EvenNumbers(1000);
    cout<<"Display ODD numbers in range"<<endl;
    OddNumbers(1,2);
    cout<<"random numbers"<<endl;
    Random_numbers();
    cout<<"making function working"<<endl;
    FNC_1();
    cout<<"finish function"<<endl;
    finsih_func();
}
