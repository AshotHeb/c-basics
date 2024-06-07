#include <iostream>
using namespace std;

int main()
{
    // 1.Arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    // cout << numbers[0] << endl; // 1

    // 2.Pointers ( pointer save the reference of a new variable )
    // A pointer is a variable that stores the memory address of another variable.
    int x = 10;
    int *ptr = &x;
    *ptr = 8;
    // cout << x << endl; // 10

    // 3.References ( reference is an alias for a variable )
    int num = 777;
    int &ref = num;
    ref = 888;
    cout << num << endl; // 888

    return 0;
}