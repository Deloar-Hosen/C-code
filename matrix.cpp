#include <iostream>
using namespace std;

int main()
{
    int A[2][3], i, j;
    cout << "enter the value of A matrix:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "A"
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << "=";
            cin >> A[i][j];
        }
    }
    cout << endl
         << endl;
    cout << "A matrix=";
    for (i = 0; i < 2; i++)
    {
        cout << "\t";
        for (j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}