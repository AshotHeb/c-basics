#include <iostream>
using namespace std;

int main()
{
    // 1.
    //  Integer type ( 4 bytes )
    //  short int ( 2 bytes )
    //  long int ( 4 bytes )
    //  long long int ( 8 bytes )

    int a = 10;
    cout << "Integer: " << a << endl;

    // 2.
    //  Float type ( 4 bytes )
    //  double x = 7.8 ( 8 bytes )
    float b = 10.5;
    cout << "Float: " << b << endl;

    // 3.
    //  Char  type ( 1 byte )
    char letter = 'A';
    cout << "Character: " << letter << endl;

    // 4.
    //  Boolean (1 byte)
    bool isTrue = true;
    cout << "Boolean: " << isTrue << endl;

    return 0;
}