#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }
}
vector<int> getArray()
{
    vector<int> a = {1, 2, 3, 4, 5};
    return a;
}

int main()
{

    // Array declaration ------------
    // int arr[5] = {1, 2, 3, 4, 5};

    // Accessing array elements ------------
    // cout << "First element: " << arr[0] << endl;

    // Changing array elements ------------
    // arr[0] = 10;
    // cout << "First element after change: " << arr[0] << endl;

    // Iterating over array ------------

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Element at index " << i << " is " << arr[i] << endl;
    // }

    // pass array to function ------------

    // printArray(arr, 5);

    // Return Array from function ------------

    // The best way to return an array from a function in C++ is to use a container like std::vector or std::array.
    // These containers manage memory automatically and are safer to use than raw arrays.

    // vector<int> arr2 = getArray();
    // for (int i = 0; i < arr2.size(); i++)
    // {
    //     cout << "Element at index " << i << " is " << arr2[i] << endl;
    // }

    return 0;
}