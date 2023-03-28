// WAP to Convert Decimal to binary

#include <iostream>

using namespace std;

int decimalToBinary(int n)
{
    int biNum[50];

    int i = 0;

    while (n > 0)
    {

        biNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << biNum[j];
}

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    decimalToBinary(n);
    return 0;
}
// done