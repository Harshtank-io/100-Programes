// Patten
#include <iostream>
using namespace std;

int numPatten(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    numPatten(n);
}

//done