// WAP to find the a^b without using the pow and multiplication opreator

#include <iostream>

using namespace std;

int power(int a, int b)
{

    int ans = a;
    int increment = a;

    if (b == 0)
        return 0;

    for (int i = 1; i < b; i++)
    {
        for (int j = 1; j < a; j++)
        {

            ans += increment;
        }
        increment = ans;
    }
    return ans;
}

int main()
{

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter the power (b) : ";
    cin >> b;

    cout << power(a, b);
}

// done