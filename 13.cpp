// WAP to find a Multiplication of 2 Matrix (dimension and value should be entered by user)

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the dimension of the matrix-1: ";
    cin >> n1 >> n2;

    int n3, n4;
    cout << "Enter the dimension of the matri-2: ";
    cin >> n3 >> n4;

    int m1[n1][n2];
    int m2[n3][n4];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "Enter the m1[ " << i << " ][ " << j << " ]:";
            cin >> m1[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cout << "Enter the m2[ " << i << " ][ " << j << " ]:";
            cin >> m2[i][j];
        }
    }

    int result[n1][n4];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Result: " << endl;
    ;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}