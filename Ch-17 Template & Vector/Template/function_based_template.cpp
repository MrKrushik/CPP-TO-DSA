#include <iostream>
using namespace std;

template <typename T>
T addition(T a, T b)
{
    return a + b;
}

template <typename T>
T input(T n)
{
    cin >> n;

    return n;
}

template <typename T1, typename T2, typename T3>
void demo(T1 a, T2 b, T3 c)
{
    cout << "A\t: " << a << endl;
    cout << "B\t: " << b << endl;
    cout << "C\t: " << c << endl;
}

int main()
{
    cout << addition<int>(45, 10) << endl;
    // addition<int>(45,10)

    cout << addition<double>(78.23, 49.67);
    // addition<double>(78.23,49.67)

    int a;
    float PI;
    char ch;

    cout << "Enter any number : ";
    a = input(a);

    cout << "Enter PI value : ";
    PI = input(PI);

    cout << "Enter character value : ";
    ch = input(ch);

    cout << a << endl
         << PI << endl
         << ch << endl
         << endl;

    demo(10, 3.14, 'A');

    return 0;
}