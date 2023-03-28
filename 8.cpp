// Total of odd an even nums in given number

#include <iostream>
using namespace std;

int countOdd = 0;
int countEven = 0;
int totDigits(int n)
{
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            countEven++;
        else
            countOdd++;
        n = n / 10;
    }

    cout << "Evens : " << countEven << endl;
    cout << "Odds : " << countOdd << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    totDigits(n);
}
// done