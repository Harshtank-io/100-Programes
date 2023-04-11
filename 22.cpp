// Patterns

#include <iostream>

using namespace std;

int p1(int n)
{
    string a = "A";

    for (int i = 0; i < n; i++)
    {
        if (i.leng % 2 == 0)
        {
            cout << a;
            //   a++;
        }
        else
        {
            cout << i;
        }
    }
}

int p2(int n)
{
    cout << "N layer of inverted triangle !!" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = i; k < n; k++)
        {
            cout << "*";
        }
        for (int h = n - 1; h > i; h--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int p3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "* ";
        }

        for (int k = 0; k <= n; k++)
        {
            cout << " ";
        }
        for (int h = i; h < n; h++)
        {
            cout << "6";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    // p1(n);

    p2(n);

    // p3(n);

    return 0;
}