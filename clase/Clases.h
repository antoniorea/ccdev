#ifndef CLASES_H
#define CLASES_H

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
#endif // CLASES_H