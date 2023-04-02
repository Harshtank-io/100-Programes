#include <iostream>

using namespace std;

void sumOfPair(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << " " << arr[j] << endl;
                count++;
            }
        }
    }
    cout << count;
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element a[" << i << "]: ";
        cin >> arr[i];
    }

    // getting the sliding window size
    int k;
    cout << "Enter K: ";
    cin >> k;

    sumOfPair(arr, n, k);
}
