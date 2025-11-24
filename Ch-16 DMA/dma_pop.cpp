#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    cout
        << "Enter array size : ";
    cin >> size;

    arr = new int[size];

    if (arr == nullptr)
    {
        cout << "Memory allocation failed..." << endl;
        return 1;
    }
    // else
    // {
    //     cout << "Memory allocated successfully..." << endl;
    // }

    cout << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << endl
         << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
        sum += arr[i];
    }

    delete[] arr;
    arr = nullptr;

    if (arr != nullptr)
    {
        cout << "Memory deallocation failed..." << endl;
    }
}