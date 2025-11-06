#include <iostream>
using namespace std;

template <typename T>
class List
{
private:
    int *size;
    int *index;
    T *arr;

public:
    List(int size)
    {
        this->size = new int(size);
        this->index = new int(0);
        arr = new T[*this->size];
    }

    ~List()
    {
        delete[] arr;
        arr = nullptr;
    }

    void push(T value)
    {
        if (*this->index >= 0 && *this->index < *this->size)
        {
            arr[*this->index] = value;
            (*this->index)++;
        }
    }

    void fetch()
    {
        cout << "Collection elements: ";
        for (int i = 0; i < *this->size; i++)
        {
            cout << arr[i] << "   ";
        }
        cout << endl;
    }
};

int main()
{
    List<int> array(5);
    array.push(10);
    array.push(20);
    array.push(30);
    array.push(40);
    array.push(50);
    array.fetch();
    cout << endl
         << "======================" << endl;

    // Character list
    List<char> name(5);
    name.push('M');
    name.push('a');
    name.push('y');
    name.push('a');
    name.push('n');
    name.fetch();

    cout << endl
         << "======================" << endl;

    // Double list
    List<double> marksList(3);
    marksList.push(78.95);
    marksList.push(87.12);
    marksList.push(98.12);
    marksList.fetch();

    return 0;
}
