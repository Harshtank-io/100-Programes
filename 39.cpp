// Rotate the array by k steps

#include <iostream>

using namespace std;

void rotate(int k, int a[], int n)
{
    // if the rotations is greater than the size of array
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            cout << a[n + i - k] << " ";
        }
        else
        {
            cout << (a[i - k]) << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int n, k;

    cout << "Enter the size : ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] :";
        cin >> a[i];
    }

    cout << "Enter the steps : ";
    cin >> k;

    rotate(k, a, n);
}
// done