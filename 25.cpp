// Search for an element in array with recursion

#include <iostream>

using namespace std;

int j = 0;

int isInArray(int a[], int m)
{
    if (a[j] != m)
    {
        j += 1;
        return isInArray(a, m);
    }

    cout << m << " is found at " << j << " !!" << endl;
}

int main()
{

    int n;

    cout << "Enter the size : ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] :";
        cin >> a[i];
    }

    int m;
    cout << "Enter the val to search : ";
    cin >> m;

    isInArray(a, m);
}