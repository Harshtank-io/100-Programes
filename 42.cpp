// Sliding Window Problem

#include <iostream>

using namespace std;

void slideWindow(int arr[], int N, int K)
{
    int j, max;

    for (int i = 0; i <= N - K; i++)
    {
        max = arr[i];

        for (j = 1; j < K; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
    }
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

    slideWindow(arr, n, k);
}