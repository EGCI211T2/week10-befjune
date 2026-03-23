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

    
    Time t1,t2,t3;
    cout<<"What time was it?"<<endl;
    t1.get_time();
    t1.display();
    cout<<"What time is it?"<<endl;
    t2.get_time();
    t2.display();
    //t1.set_time(18,20,70);
    //t1.display();
    //t2.set_time(6,8,20);
    t3=t2.subtract(t1);
    t3.display();
    /*
    std::cout<<"What time was it?"<<endl;
    getTime(t1);

    std::cout<<"What time is it now?"<<endl;
    getTime(t2);

    t3=subtract(t2,t1); //t3=t2-t1

    std::cout<<"Time diff is ";
    display(t3);

    /*struct Time t1,t2,t3;

    std::cout<<"What time was it?"<<endl;
    getTime(t1);

    std::cout<<"What time is it now?"<<endl;
    getTime(t2);

    t3=subtract(t2,t1); //t3=t2-t1

    std::cout<<"Time diff is ";
    display(t3);*/
}
