#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rearrangeDigits(int num)
{
    // handle negative input
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    // put the digits in a vector
    vector<int> digits;
    int temp = num;
    while (temp > 0)
    {
        digits.push_back(temp % 10);
        temp /= 10;
    }

    // sort the digits in ascending order
    sort(digits.begin(), digits.end());

    // find the first non-zero digit
    int index = 0;
    while (index < digits.size() && digits[index] == 0)
    {
        index++;
    }

    // move the first non-zero digit to the front
    int rearranged = 0;
    if (index < digits.size())
    {
        int firstNonZeroDigit = digits[index];
        digits.erase(digits.begin() + index);
        digits.insert(digits.begin(), firstNonZeroDigit);
        for (int i = 0; i < digits.size(); i++)
        {
            rearranged = rearranged * 10 + digits[i];
        }
    }
    else
    {
        rearranged = 0;
    }
    if (isNegative)
        rearranged = -rearranged;
    return rearranged;
}

int main()
{
    int num = 310; // example input
    int rearranged = rearrangeDigits(num);
    cout << rearranged << endl; // output: 103
    return 0;
}
