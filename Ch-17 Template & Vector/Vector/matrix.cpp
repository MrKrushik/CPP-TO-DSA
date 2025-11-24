#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    vector<int> v(col);

    // 2D Vector
    vector<vector<int>> matrix(row, v);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter matrix[" << i << "][" << j << "] : "; // Enter Matrix[0][2] : 10
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    cout << endl;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (vector<int> collection : matrix)
    {
        for (int element : collection)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}