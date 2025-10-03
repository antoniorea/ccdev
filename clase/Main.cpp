#include "Clases.h"
#include <iostream>

int main(){

MyClass o1 { 34, 100.36 };


//std::cout << "The value of o is: " << o.printdata() << std::endl;
MyClass o2 {std::move(o1)};  // invokes the move constructor

o1.printdata();
o2.printdata();
 return 0;
}