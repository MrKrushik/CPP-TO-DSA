#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Temp
{
private:
    // Data Members == Attributes
    T1 x;
    T2 y;

public:
    Temp(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }

    void getData()
    {
        cout << "x: " << this->x << " y: " << this->y << endl;
    }
};

int main()
{
    Temp<int, double> t1(45, 96.38);

    t1.getData();

    return 0;
}