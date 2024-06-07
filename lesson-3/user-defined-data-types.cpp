#include <iostream>
using namespace std;

int main()
{
    // 1. Structs ( such as JS objects )
    struct Person
    {
        string name;
        int age;
    };

    Person p1;
    p1.name = "Ashot";
    p1.age = 20;
    // cout << "My name is " << p1.name << " " << p1.age << endl;

    // 2. Classes ( class )

    class Car
    {
    public:
        string brand;
        string model;
        int year;
        void setPrice(string p)
        {
            price = p;
        };
        void getDescription()
        {
            cout << brand << " " << model << " " << year << " " << price << endl;
        };

    private:
        string price;
    };

    Car bmw;
    bmw.brand = "BMW";
    bmw.model = "X5";
    bmw.year = 2020;
    bmw.setPrice("10000$");
    // bmw.getDescription();

    // 3. Unions

    union MyUnion
    {
        int i;
        float f;
        char str[20];
    };

    MyUnion u;
    u.i = 10;
    // cout << u.i << endl;

    return 0;
}
