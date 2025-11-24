#include <iostream>
using namespace std;

class A
{
    // Access Modifier
    int a;

protected:
    int b;

public:
    int c;
};

// class DerivedClass : [Visibility Modifier] ParentClass
class B : private A
{
    // private:
    // int c;
    // int b;

    // protected:

    // public:
};
class C : public B
{
public:
    void setData()
    {
        b = 20;
        c = 30;
    }
};

int main()
{
}