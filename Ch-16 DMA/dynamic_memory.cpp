#include <iostream>
using namespace std;

int main()
{
     int *n = new int();
     float *PI = new float();

     // *n = 45;
     cout << "Enter any number : ";
     cin >> *n;

     cout << "Address : " << n << endl;
     cout << "Value   : " << *n << endl
          << endl;

     delete n;

     cout << "Address : " << n << endl;
     cout << "Value   : " << *n << endl
          << endl;

     n = new int(78);

     cout << "Address : " << n << endl;
     cout << "Value   : " << *n << endl
          << endl;

     delete n;

     cout << "Address : " << n << endl;
     cout << "Value   : " << *n << endl
          << endl;

     n = new int[3];

     n[0] = 10;
     n[1] = 20;
     n[2] = 30;

     cout << "Address : " << n << endl;
     cout << "Value   : " << &n[0] << endl
          << endl;

     delete[] n;
     n = NULL;

     cout << "Address : " << n << endl;

     n = new int(78);

     cout << "Address : " << n << endl;
     cout << "Value   : " << *n << endl
          << endl;
}