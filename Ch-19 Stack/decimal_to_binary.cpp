#include <iostream>
#define MAX 100
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
        }
    }

    void pop()
    {
        if (this->isEmpty())
        {
            cout << "Stack is underflow..." << endl;
        }
        else
        {
            this->top--;
        }
    }

    void display()
    {
        if (this->isEmpty())
        {
            cout << "Stack is empty..." << endl;
        }
        else
        {
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            // cout << "Stack is empty..." << endl;
            return true;
        }
        else
        {
            // cout << "Stack is not empty" << endl;
            return false;
        }
    }
};

int main()
{
    Stack stack(MAX);
    int num;

    cout << "Enter any number : ";
    cin >> num;

    while (num != 0)
    {
        stack.push(num % 2);

        num = num / 2;
    }

    stack.display();
}