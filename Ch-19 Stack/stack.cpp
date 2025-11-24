#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->len = 0;
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
            this->len++;
            cout << "element is pushed...." << endl;
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
            this->len--;
            cout << "element is popped...." << endl;
        }
    }

    void peek()
    {
        if (this->isEmpty())
        {
            cout << "Stack is empty..." << endl;
        }
        else
        {
            cout << "Peek : " << this->arr[this->top] << endl;
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

    void isFull()
    {
        (this->top == this->size - 1) ? cout << "Stack is full..." << endl : cout << "Stack is not full" << endl;
    }

    void length()
    {
        cout << "Length : " << this->len << endl;
    }
};

int main()
{
    int size;

    cout << "Enter number of stack elements : ";
    cin >> size;

    Stack stack(size);

    int choice;
    int element;

    do
    {
        cout << "Press 01 for push operation" << endl;
        cout << "Press 02 for pop operation" << endl;
        cout << "Press 03 for peek operation" << endl;
        cout << "Press 04 for display operation" << endl;
        cout << "Press 05 for isEmpty operation" << endl;
        cout << "Press 06 for isFull operation" << endl;
        cout << "Press 07 for size(length) operation" << endl;
        cout << "Press 00 for exit..." << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element : ";
            cin >> element;

            stack.push(element);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            stack.isEmpty() ? cout << "Stack is empty.." << endl : cout << "Stack is not empty..." << endl;
            break;
        case 6:
            stack.isFull();
            break;
        case 7:
            stack.length();
            break;
        case 0:
            cout << "Exit.........." << endl;
            break;
        default:
            cout << "Invalid Choice..." << endl;
            break;
        }

    } while (choice != 0);
}