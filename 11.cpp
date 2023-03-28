#include <iostream>

using namespace std;

int main()
{
    int n;
    int temp;
    int p = 0;

    cout << "Enter the Num : ";
    cin >> n;

    temp = n;

    while (n > 0)
    {
        int rem = n % 10;
        p = p + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == p)
        cout << temp << " is Armstrong!" << endl;
    else
        cout << temp << "is not Armstrong" << endl;
}