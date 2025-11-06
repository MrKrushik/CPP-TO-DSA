#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;

    cout << endl
         << "2D Matrix using Vectors" << endl;
    cout << "----------------------------" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<int> v(cols);

    // 2d vector
    vector<vector<int>> matrix(rows, v);

    // input

    cout << endl
         << "Enter elements of matrix: " << endl;
    cout << "----------------------------" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at matrix [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // output

    cout << "Matrix is: " << endl;
    cout << "-------------" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------" << endl;
}