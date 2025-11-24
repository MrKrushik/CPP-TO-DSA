#include <iostream>
using namespace std;

class DMA
{
private:
    int *size;
    int *arr;
    string wrongIndex = "Index is wrong";

public:
    DMA(int size)
    {
        this->size = new int(size);
        arr = new int[*this->size];

        if (arr == nullptr)
            cout << "Memory allocation failed..." << endl;
        else
            cout << "Memory allocated successfully..." << endl;
    }
    ~DMA()
    {
        delete[] arr;
        arr = nullptr;

        delete size;
        size = nullptr;

        if (arr != nullptr)
            cout << endl
                 << "Memory deallocation failed..." << endl;
        else
            cout << endl
                 << "Memory deallocated successfully..." << endl;
    }

private:
    bool indexCheck(int index)
    {
        return (index >= 0 && index < *this->size) ? true : false;
        // return (index >= 0 && index < this->size);
    }

public:
    void insert(int index, int value)
    {
        if (this->indexCheck(index))
        {
            arr[index] = value;
        }
        else
        {
            cout << endl
                 << this->wrongIndex << endl;
        }
    }

    void getValue(int index)
    {
        if (this->indexCheck(index))
        {
            cout << "Element is " << arr[index] << endl;
        }
        else
        {
            cout << endl
                 << this->wrongIndex << endl;
        }
    }
};

int main()
{
    DMA *d1 = new DMA(5);

    d1->insert(0, 45);
    d1->insert(1, 65);
    d1->insert(2, 95);
    d1->insert(3, 100);

    d1->getValue(3); // 0

    // DMA *d2 = new DMA[5];

    delete d1;
}