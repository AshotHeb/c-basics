// Run-Time Type Identification (RTTI) is a feature in C++
// that allows you to obtain the type information of an object during program execution.
// This can be useful when using dynamic typing, where the type of an object can change at runtime.

#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
    virtual void dummy() {}
};
class Derived : public Base
{ /* ... */
};

int main()
{

    // typeid ---------------------------

    Base *base_ptr = new Derived;

    // std::cout << "Type: " << typeid(*base_ptr).name() << '\n';

    delete base_ptr; // new - յով օբյեկտ սարքելու ժամանակ նոր հիշողություն է ստեղծվում և դա պարտադիր պետք է հետո մաքրել delete  ope8atw8i միջոցով

    // my experiment in the class ---------------------------
    class Car
    {

    public:
        // default constructor
        Car() : year(0) {}

        int year;
        virtual void drive()
        {
            std::cout << "Car is driving" << std::endl;
        };

        int getYear()
        {
            return year;
        }
    };

    class BMW : public Car
    {
    public:
        void drive()
        {
            std::cout << "BMW is driving" << std::endl;
        };
    };

    BMW bmw;
    // bmw.drive();
    bmw.year = 2021;
    // std::cout << "Year of the car: " << bmw.getYear();

    BMW a;
    // a.drive();
    // std::cout << "Year of the car: " << a.getYear();

    /// dynamic_cast -----------------------------

    class Base
    {
    public:
        virtual void print() { std::cout << "Base\n"; } // Add a virtual function
    };

    class Derived : public Base
    {
    };

    Base *basePointer = new Derived;
    Derived *derivedPointer = dynamic_cast<Derived *>(basePointer);
    cout << basePointer;

    return 0;
}