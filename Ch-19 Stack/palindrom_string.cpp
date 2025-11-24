#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

class Stack
{
private:
    char *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new char[size];
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

    char pop()
    {
        if (this->isEmpty())
        {
            cout << "Stack is underflow..." << endl;
            return ' ';
        }
        else
        {
            // this->top--;
            return arr[top--];
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

    bool isPalindrom(string str)
    {
        for (char ch : str)
        {
            this->push(ch);
        }

        for (char ch : str)
        {
            if (ch != pop())
                return false;
        }

        return true;
    }
};

int main()
{
    char str[MAX];

    cout << "Enter any string : ";
    cin >> str; //  nayan     keval

    Stack stack(MAX);

    strlwr(str);

    if (stack.isPalindrom(str))
    {
        cout << "String is a palindrom..." << endl;
    }
    else
    {
        cout << "String is a not palindrom..." << endl;
    }
}