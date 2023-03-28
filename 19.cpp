// Bucket Sort

#include <iostream>
using namespace std;

void bucketSort(int arr[], int n)
{
    int max = getMax(arr, n);

    int bucket[max];

    for (int i = 0; i < max; i++)
    {
        bucket[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        bucket[arr[i]]++;
    }
    
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element a[" << i << "]: ";
        cin >> arr[i];
    }

    bucketSort(arr, n);
}