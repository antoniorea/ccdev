#include <iostream>
#include <string>


class MyClass {
    private:        
        int x; 
        double y;       

    public: 
    MyClass(int xx , double yy);  // user defined  constructor
    ~MyClass();                     // user defined  destructor
    MyClass(const MyClass& rhs); // user defined copy constructor
    MyClass(MyClass&& rhs);         // user defined move constructor
    void setx(int myvalue);
    void sety(double myvalue);
    void printdata();
    int getx();
    double gety();


};
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


int main(){

MyClass o1 { 34, 100.36 };


//std::cout << "The value of o is: " << o.printdata() << std::endl;
MyClass o2 {std::move(o1)};  // invokes the move constructor

o1.printdata();
o2.printdata();
 return 0;
}

