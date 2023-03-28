#include <iostream>

using namespace std;

void intersection(int a1[], int a2[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i] == a2[j] || a1[j] == a2[i])
                cout << " " << a1[i] << endl;
        }
    }
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 3, 5, 4, 3};
    int arr2[] = {1, 2, 2, 3, 2, 3, 4, 5};

    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    intersection(arr1, arr2, m, n);
}