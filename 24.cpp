// Delete the array by specific location

#include <iostream>
using namespace std;

int del(int n, int arr[], int val)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == val)
        {
            int temp;
            temp = arr[i];
        }
        cout << arr[i] << endl;
    }
}
int main()
{

    int n, index, val; // val is the new element to be inserted at given index
    cout << "Enter Size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Enter the val : ";
    cin >> val;

    del(n, arr, val);
}