#include <iostream>
#include <climits> // for INT_MIN

using namespace std;

int add(int a, int b)
{
    return a + b;
}

float divide(int a, int b)
{
    return static_cast<float>(a) / b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

float calculation(int a, int b, char operation)
{

    switch (operation)
    {
    case '+':
        return add(a, b);
    case '-':
        return subtract(a, b);
    case '*':
        return multiply(a, b);
    case '/':
        if (b != 0)
        {
            return divide(a, b);
        }
        else
        {
            return INT_MIN; // return INT_MIN if division by zero
        }
    default:
        return INT_MIN;
    }
}

int main()
{
    int a, b;
    char operation;
    float result;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    result = calculation(a, b, operation);
    cout << "Result: " << result << endl;

    return 0;
}