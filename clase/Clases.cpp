
#include "Clases.h"
#include <iostream>
#include <string>


MyClass::MyClass(int xx , double yy)            // user defined Constructor
        : x{ xx }, y{ yy }                      // initializer lis
{

    std::cout << "User constructor invoked." << '\n';
}
MyClass::~MyClass(){    // user defined destructor

    std::cout << "User destructor invoked." << '\n';
}

// user defined copy constructor
MyClass::MyClass(const MyClass& rhs)  
    : x{ rhs.x }, y{ rhs.y } // initialize members with other object's
                                // members
{
    std::cout << "User-defined copy constructor invoked.\n";
}
MyClass::MyClass(MyClass&& rhs)                                 // move constructor
        : x{ std::move(rhs.x) }, y{ std::move(rhs.y) }          // initializer list
{
std::cout << "Move constructor invoked." << '\n';
}


void MyClass::printdata(){
    std::cout << "The value of x: " << x << ", the value of y: " << y << '\n';
}
void MyClass::setx(int myvalue){
    this->x = myvalue;
}
void MyClass::sety(double myvalue){
    this->y = myvalue;
}

int MyClass::getx(){
    return this->x;
}

double MyClass::gety(){
    return this->y;
}


