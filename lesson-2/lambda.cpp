#include <iostream>
using namespace std;

int main()
{
    auto lambda = []()
    {
        cout << "Hello, World!" << endl;
    };

    lambda();

    return 0;
}