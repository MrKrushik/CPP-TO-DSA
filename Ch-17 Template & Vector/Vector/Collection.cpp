#include <iostream>
#include <vector>
using namespace std;

class Collection
{
    vector<int> v;

public:
    void addElement(int element)
    {
        v.push_back(element);
    }
    void getElements()
    {
        if (v.empty() == 0)
        {
            cout << "Vector is : ";
            for (int element : v)
            {
                cout << element << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No data found..." << endl;
        }
    }

    void updateElement(int index, int element)
    {
        if (index >= 0 && index < v.size())
        {
            v[index] = element;
        }
        else
        {
            cout << "Invalid Index...." << endl;
        }
    }

    void deleteElement(int index)
    {
        if (index >= 0 && index < v.size())
        {
            v.erase(v.begin() + index);
        }
        else
        {
            cout << "Invalid Index...." << endl;
        }
    }
    void display()
    {
        cout << "Press 1 for Insert element" << endl;
        cout << "Press 2 for Fetch element" << endl;
        cout << "Press 3 for Update element" << endl;
        cout << "Press 4 for Delete element" << endl;
        cout << "Press 5 for Exit" << endl;
    }
};

int main()
{
    Collection c1;
    int choice;
    int *index = new int;
    int *element = new int;

    do
    {
        c1.display();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element : ";
            cin >> *element;
            c1.addElement(*element);
            break;
        case 2:
            c1.getElements();
            break;

        case 3:
            cout << "Enter index : ";
            cin >> *index;
            cout << "Enter element : ";
            cin >> *element;
            c1.updateElement(*index, *element);
            break;

        case 4:
            cout << "Enter index : ";
            cin >> *index;

            c1.deleteElement(*index);
            break;

        case 5:
            cout << "Exit...." << endl;
            break;

        default:
            cout << "Invalid Choice...." << endl;
            break;
        }

    } while (choice != 5);

    delete index;
    delete element;

    return 0;
}