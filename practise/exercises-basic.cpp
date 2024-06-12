#include <iostream>
#include <cmath>

using namespace std;

/// Ծրագրավորման խնդիրների ժողովածու.pdf

// Main functions

string getResultString(bool result)
{
    return result ? "true" : "false";
}

int getArraySize(int arr[])
{
    return sizeof(arr) / sizeof(arr[0]);
}

// Exercises

bool exercise_51(int num)
{

    int point = num % 10;
    int tens = (num % 100) / 10;
    int hundreds = num / 100;

    cout << "Point: " << point << endl;
    cout << "Tens: " << tens << endl;
    cout << "Hundreds: " << hundreds << endl;

    if (point == tens + hundreds)
    {
        return true;
    }

    return false;
}

int exercise_76()
{
    int num = 2;

    for (int x = -5; x <= 5; x++)
    {
        if (x > 0)
        {
            int result = x * x + 4 * pow(x, 8);
            cout << "result =  " << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        x++;
    }

    return 0;
}

int main()
{
    // Ex. 51
    // bool reault_51_1 = exercise_51(415);
    // cout << "Result 51_1: " << getResultString(reault_51_1) << endl; // Expected output: 1

    // Ex. 76
    // exercise_76();

    return 0;
}