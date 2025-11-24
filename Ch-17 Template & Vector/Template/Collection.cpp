#include <iostream>
using namespace std;

template <typename T>
class List
{
private:
    int *size;
    int *index = new int(0);
    T *arr;

public:
    List(int size)
    {
        this->size = new int(size);
        arr = new T[*this->size];

        // if (arr != nullptr)
        // {
        //     cout << "Array is allocated.." << endl;
        // }
    }

    ~List()
    {
        delete[] arr;
        delete size;
        delete index;

        arr = nullptr;
        size = nullptr;
        index = nullptr;

        // if (arr == nullptr)
        // {
        //     cout << "Array is deallocated.." << endl;
        // }
    }

    void insertElement(int index, T value)
    {
        if (index >= 0 && index < *this->size)
            arr[index] = value;
    }

    void push(T value)
    {
        if (*this->index >= 0 && *this->index < *this->size)
        {
            arr[*this->index] = value;
            *index = *index + 1;
        }
    }

    void fetchCollection()
    {
        cout << "Collection elements : " << endl;
        for (int i = 0; i < *this->size; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    List<int> arr(5);

    // intCollection.insertElement(0, 10);
    // intCollection.insertElement(1, 20);
    // intCollection.insertElement(2, 30);
    // intCollection.insertElement(3, 40);
    // intCollection.insertElement(4, 50);
    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);

    arr.fetchCollection();

    cout << endl
         << "------------------------" << endl;
    List<char> name(5);

    name.push('N');
    name.push('a');
    name.push('y');
    name.push('a');
    name.push('n');

    name.fetchCollection();

    cout << endl
         << "------------------------" << endl;
    List<double> marks(3);

    marks.push(78.96);
    marks.push(87.12);
    marks.push(98.12);

    marks.fetchCollection();

    return 0;
}