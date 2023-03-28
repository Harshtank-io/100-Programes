#include <iostream>

using namespace std;

int *insert(int n, int arr[], int val, int pos)
{
    n++; // increse the n by 1

    // Shifting the elements
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;

    return arr;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    int pos, val;

    cout << "Enter the value to insert: ";
    cin >> val;

    cout << "Enter the postion: ";
    cin >> pos;

    insert(n, arr, val, pos);

    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
}