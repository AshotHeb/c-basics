#include <iostream>
using namespace std;

int main()
{
    // 1. Dynamic types
    // void* is a pointer to an unknown type
    int x = 20;
    void *ptr;
    ptr = &x;
    cout << "Value of x is: " << *(int *)ptr << endl;

    // 2. any type
    // After C++17

    return 0;
}
