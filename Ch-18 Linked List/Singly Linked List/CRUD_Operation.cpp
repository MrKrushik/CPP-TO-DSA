#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = nullptr;
        this->count = 0;
    }

    void insertFromBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    void insertFromEnding(int data)
    {
        Node *newNode = new Node(data);

        if (this->head == nullptr || this->count == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;

            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    void insertPosition(int data, int position)
    {
        if (position < 0 || position > count)
        {
            cout << endl
                 << "Position invalid..." << endl;
            return;
        }

        Node *newNode = new Node(data);

        if (this->head == nullptr || this->count == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            if (position > 0 && position < count)
            {
                Node *ptr = this->head;

                for (int i = 0; i < position - 1; i++) // i=1; 1 < 2-1; i++
                {
                    ptr = ptr->next;
                }
                newNode->next = ptr->next;
                ptr->next = newNode;
            }
            else
            {
                cout << endl
                     << "Invalid position...." << endl;
            }
        }
        this->count++;
    }

    void update(int data, int position)
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }
        if (position < 0 || position > count)
        {
            cout << endl
                 << "Position invalid..." << endl;
            return;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++) // 2 < 2
        {
            ptr = ptr->next; // ptr = 901
        }
        ptr->data = data;
        ptr = nullptr;
    }

    void deleteFromBeginning()
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }

        Node *ptr = this->head;
        this->head = this->head->next;
        delete ptr;
        ptr = nullptr;
        this->count--;
    }

    void deleteFromEnding()
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }

        Node *ptr = this->head;

        while (ptr->next->next != nullptr)
        {
            ptr = ptr->next;
        }

        delete ptr->next;
        ptr->next = nullptr;
        ptr = nullptr;
        this->count--;
    }

    void deleteAnyPosition(int position)
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }

        if (position < 0 || position > count)
        {
            cout << endl
                 << "Position invalid..." << endl;
            return;
        }

        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
            current = current->next;

        for (int i = 0; i < position - 1; i++)
            prev = prev->next;

        prev->next = current->next;
        delete current;
        current = nullptr;

        prev = nullptr;
        delete prev;

        this->count--;
    }

    void displayAllNodes()
    {
        Node *ptr = this->head;
        while (ptr != nullptr)
        {
            cout << ptr->data << " "; // 45 25 97 15
            ptr = ptr->next;          // ptr = NULL
        }

        cout << endl
             << endl;
    }

    int length()
    {
        return count;
    }
};

int main()
{
    LinkedList l1;

    int choice;
    int data, position;

    do
    {
        cout << "Press 1 for insert from beginning" << endl;
        cout << "Press 2 for insert from ending" << endl;
        cout << "Press 3 for insert at any position" << endl;
        cout << "Press 4 for update" << endl;
        cout << "Press 5 for delete from beginning" << endl;
        cout << "Press 6 for delete from ending" << endl;
        cout << "Press 7 for delete any position" << endl;
        cout << "Press 8 for display all nodes" << endl;
        cout << "Press 9 for nodes length" << endl;
        cout << "Press 0 for exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element : ";
            cin >> data;
            l1.insertFromBeginning(data); // insertFromBeginning(45)
            break;

        case 2:
            cout << "Enter element : ";
            cin >> data;
            l1.insertFromEnding(data); // insertFromEnding(15)
            break;

        case 3:
            cout << "Enter element : ";
            cin >> data;
            cout << "Enter position : ";
            cin >> position;
            l1.insertPosition(data, position);
            break;
        case 4:
            cout << "Enter element : ";
            cin >> data;
            cout << "Enter position : ";
            cin >> position;
            l1.update(data, position);
            break;

        case 5:
            l1.deleteFromBeginning();
            break;

        case 6:
            l1.deleteFromEnding();
            break;
        case 7:
            cout << "Enter position : ";
            cin >> position;
            l1.deleteAnyPosition(position);
            break;

        case 8:
            cout << endl
                 << "Display All Nodes : ";
            l1.displayAllNodes();
            break;

        case 9:
            cout << endl
                 << "Length : " << l1.length() << endl;
            break;
        case 0:
            cout << endl
                 << "Exit..." << endl;
            break;

        default:
            cout << endl
                 << "Invalid choice..." << endl;
        }

    } while (choice != 0);
}