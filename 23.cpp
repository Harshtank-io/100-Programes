// Enter a element at specific postion in array
// Do not take new array

#include <iostream>
using namespace std;

int insert(int n, int arr[], int index, int val)
{
    for (int i = 0; i <= n; i++)
    {
        if (i == index)
        {
            arr[i] = val;
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
        cout << "arr[" << i << "] : ";6
        cin >> arr[i];
    }

    cout << "Enter the index to insert the element : ";
    cin >> index;

    cout << "Enter the val : ";
    cin >> val;

    insert(n, arr, index, val);
}