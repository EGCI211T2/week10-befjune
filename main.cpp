#include <iostream>
#include <iomanip>

using namespace std;
#include "Time.h"

void square(int&);

void square(int &x){
    x*=x;
}


int main(){

    /*int age;
    string color;

    std::cout<<"Hello world"<<std::endl;
    cout<<"Your age and color ";
    cin>>age>>color;
    square(age);
    //cout<<"Age: "<<setfill('x')<<setw(8)<<age<<endl;
    cout<<"Age: "<<fixed<<setprecision(2)<<age<<endl;
    cout<<"Colour: "<<setfill('x')<<setw(8)<<color<<endl;*/

    
    struct Time t1,t2,t3;

    cout<<"What time was it?";
    getTime(t1);

    cout<<"What time is it now?";
    getTime(t2);

    t3=subtract(t2,t1); //t3=t2-t1

    cout<<"Time diff is ";
    display(t3);
}
