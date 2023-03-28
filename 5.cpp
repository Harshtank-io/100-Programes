// Summation of digit of a given number

#include <iostream>
using namespace std;

int getSum(int n)
{

    int sum = 0;

    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

// Recursive
int reSum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + reSum(n / 10);
}
int main()
{

    int n;
    cout << "Enter n :";
    cin >> n;

    cout << "itreative : " << getSum(n) << endl;
    cout << "recursive : " << reSum(n) << endl;
    return 0;
}
//done