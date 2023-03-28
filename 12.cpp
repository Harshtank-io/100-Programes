// WAP to find the max min avg of n numbers given by the user

#include <iostream>

using namespace std;

int aritmetic(int n)
{

    int max = 0, val, sum = 0;
    int avg = 0;
    int min;

    cout << "Enter Values : ";
    for (int i = 1; i <= n; i++)
    {

        cin >> val;

        // for inizalizing the first value of the min
        if (min == NULL)
        {
            min = val;
        }
        if (val > max)
            max = val;
        if (val < min)
            min = val;

        sum = sum + val;
        avg = sum / n;
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    cout << "Avg : " << avg << endl;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    aritmetic(n);
}

// done 