// Fibonacci Sequences (n is entered by user) (iterative and recursive)

#include <iostream>

using namespace std;

int fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return x;
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}

int main()
{
    int a = 0;
    int b = 1;
    int c, n;
    int i = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << endl;
    cout << "iterative !!" << endl;
    // iterative
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    cout << "Recursive !! " << endl;
    while (i < n)
    {
        cout << fib(i) << " ";
        i++;
    }
    return 0;
}
