#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1{10, 20, 30, 40, 50, 60, 70, 80};

    // v1.insert(v1.begin() + 2, 100);
    v1.erase(v1.begin() + 3, v1.end() - 2);

    cout << "Vector is : ";
    for (int element : v1)
        cout << element << " ";

    return 0;
}