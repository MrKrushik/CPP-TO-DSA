#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> array(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> array[i];
    }

    cout << "Vector is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl
         << "Smallest Elements : ";
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] < array[i - 1] && array[i] < array[i + 1])
        {
            cout << array[i] << " ";
        }
    }

    cout << endl
         << "Large Elements : ";
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] > array[i - 1] && array[i] > array[i + 1])
        {
            cout << array[i] << " ";
        }
    }
}