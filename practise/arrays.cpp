#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    const int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " is " << arr[i] << endl;
    }
}

int getMaxValueOfArray(vector<int> array)
{
    int size = array.size();
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

vector<int> exercise_311(vector<int> array)
{
    const int maxOfArray = getMaxValueOfArray(array);
    const int size = array.size();

    vector<int> result;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            result.push_back(array[i] * maxOfArray);
        }
    }

    return result;
}

int findIndex(vector<int> array, int value)
{
    const int size = array.size();
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }

    return -1;
}

vector<int> exercise_382(vector<int> array1, vector<int> array2)
{
    const int size = array1.size();
    vector<int> result;

    for (int i = 0; i < size; i++)
    {
        const int index = findIndex(array2, array1[i]);
        if (index != -1)
        {
            result.push_back(array1[i]);
        }
    }

    return result;
}

vector<int> exercise_420(vector<int> array)
{
    struct NumberDataInArray
    {
        int value;
        int count;
    };


    const int size = array.size();

    for(int i = 0 ; i< size;i++) {
        const int item = array[i];
    }
}

int main()
{
    // ################# Ex. 311 #################

    // const vector<int> exercise_311_array = {1, 2, 3, 4, 5};
    // const vector<int> result_311 = exercise_311(exercise_311_array);
    // printArray(result_311);

    // ################# Ex. 382 #################

    // const vector<int> exercise_382_array_1 = {1, 2, 3, 4, 5};
    // const vector<int> exercise_382_array_2 = {0, 7, 9, 4, 5};
    // const vector<int> result_382 = exercise_382(exercise_382_array_1, exercise_382_array_2);
    // printArray(result_382);

    // ################# Ex. 420 #################

    const vector<int> exercise_420_array = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    const vector<int> result_420 = exercise_420(exercise_420_array);

    return 0;
}