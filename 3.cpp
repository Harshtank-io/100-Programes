// WAP to find the factors of the given number (itreative and recurcive)

#include <iostream>

using namespace std;

void fact(int n, int i)
{

    if (i <= n)
    {
        if (n % i == 0)
            cout << i << " ";
        fact(n, i + 1);
    }
}

int main()
{

    int n;

    cout << "Enter n : ";
    cin >> n;

    cout << "itreative ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;

    cout << "recursive ";
    fact(n, 1);
}
//done