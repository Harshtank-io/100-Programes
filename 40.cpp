// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one

#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> &arr)
{
    bool modified = false;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            if (modified)
                return false;

            if (i == 1 || arr[i] >= arr[i - 2])
                arr[i - 1] = arr[i];

            else
                arr[i] = arr[i - 1];

            modified = true;
        }
    }
    return true;
}

int main()
{

    vector<int> arr = {4, 2, 3};
    bool result = check(arr);

    cout << (result ? "True" : "False");
    return 0;
}