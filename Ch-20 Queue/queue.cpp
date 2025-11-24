#include <iostream>
using namespace std;

// Interface
class MyQueue
{
public:
    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;
    virtual void get_front() = 0;
    virtual void get_rear() = 0;
    virtual void display() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual int size() = 0;
};

class Queue : public MyQueue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is overflow...." << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }

    void dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is underflow...." << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else
        {
            this->front++;
            this->count--;
        }
    }

    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Front : " << this->arr[this->front] << endl;
        }
    }

    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Rear : " << this->arr[this->rear] << endl;
        }
    }

    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl;
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not empty" << endl;
        }
    }

    void isFull()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is full..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not full..." << endl;
        }
    }

    int size()
    {
        return this->count;
    }
};

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    Queue queue(size);

    int choice;
    int element;

    do
    {

        cout << endl;
        cout << "Press 1 for enqueue operation" << endl;
        cout << "Press 2 for dequeue operation" << endl;
        cout << "Press 3 for front operation" << endl;
        cout << "Press 4 for rear operation" << endl;
        cout << "Press 5 for display operation" << endl;
        cout << "Press 6 for isEmpty operation" << endl;
        cout << "Press 7 for isFull operation" << endl;
        cout << "Press 8 for Size operation" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter any element : ";
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.get_front();
            break;
        case 4:
            queue.get_rear();
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.isEmpty();
            break;
        case 7:
            queue.isFull();
            break;
        case 8:
            cout << endl
                 << "Queue Length : " << queue.size() << endl;
            break;
        case 0:
            cout << endl
                 << "Exit..." << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice..." << endl;
            break;
        }

    } while (choice != 0);
}