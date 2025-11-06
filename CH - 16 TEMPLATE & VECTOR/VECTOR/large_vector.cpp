#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << endl
         << "Smallest Element in Vector" << endl;
    cout << "................................." << endl;
    int size;
    cout << "Enter size of elements: ";
    cin >> size;
    cout << "................................." << endl
         << endl;

    vector<int> vec(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> vec[i];
    }

    cout << "..................................";
    cout << endl
         << "Elements in vector are: ";
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl
         << "..................................";

    cout << endl
         << "large Element: ";
    for (int i = 1; i < size - 1; i++)
    {
        if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1])
        {
            cout << vec[i] << " ";
        }
    }
    cout << endl
         << ".................................." << endl;
}