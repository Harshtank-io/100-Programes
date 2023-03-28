// WAP to find the Factorial of a given number (itreative and recurcive)

#include <iostream>

using namespace std;

long long int fac(int n)
{
    if (n >= 1)
        return n * fac(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "itreative " << fact << endl;
    cout << "recursive " << fac(n);
}
//done