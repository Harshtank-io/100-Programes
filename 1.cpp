// Sum of even numbers in the 1d array
#include <iostream>

using namespace std;
int sum(int n, int a[])
{

    int sumEven = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return sumEven = sumEven + a[i];
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;

    cout << "Enter size of the array : " << endl;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {

        cout << "Enter element A[" << i << "] : ";
        cin >> a[n];
    }
    cout << sum(n, a);

    return 0;
}
// done