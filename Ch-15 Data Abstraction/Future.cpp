#include <iostream>
using namespace std;

// Abstract Class
class Future
{
public:
    // Abstract Method == Pure Virtual Function
    virtual void movePhone() = 0;
    virtual void dancePhone() = 0;

    void callPhone()
    {
        cout << "Calling can be done via smartphone" << endl;
    }
};

class Child : public Future
{
    // virtual void movePhone() = 0;
    // virtual void dancePhone() = 0;
    // void callPhone()
public:
    void movePhone()
    {
        cout << "Moving Phone...." << endl;
    }
};

class C : public Child
{
public:
    void dancePhone()
    {
        cout << "Dance Phone...." << endl;
    }
};

int main()
{
    C c1;

    c1.callPhone();
    c1.movePhone();
    c1.dancePhone();
}