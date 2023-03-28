// number is even or odd with out using the " % " opreator

#include <iostream>
using namespace std;

// solution 1
int isEven(int n)
{
    int eve = 1;
    for (int i = 1; i <= n; i++)
    {
        eve = !eve;
    }
    return eve;
}

// Solution 2
bool even(int n)
{
    return ((n / 2) * 2 == n);
}

int main()
{

    int n;
    cout << "Enter n :";
    cin >> n;

    isEven(n) ? cout << "Even" : cout << "odd";

    cout << endl;

    even(n) ? cout << "Even" : cout << "odd";
}
// done 