#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = new Node();

    HEAD->data = 25;
    HEAD->next = nullptr;

    Node *current = new Node();
    current->data = 47;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 89;
    current->next = nullptr;
    HEAD->next->next = current;

    current = new Node();
    current->data = 63;
    current->next = nullptr;
    HEAD->next->next->next = current;
    // HEAD->next->next->next->next = current;

    Node *ptr = HEAD;

    while (ptr != nullptr)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}