// Decimal to binary

#include <iostream>

using namespace std;

int convert_D_to_B(int decimal)
{

    if (decimal == 0)
    {
        printf("0\n");
    }

    int binary[32] = {0};
    int i = 0;

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}

int main()
{
    int decimal;
    cout << "Enter the Decimal : " << endl;
    cin >> decimal;
    convert_D_to_B(decimal);
}