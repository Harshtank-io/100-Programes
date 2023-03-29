// intersection of the two array

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &num1, vector<int> &nums2)
    {
        unordered_map<int, int> freq;
        vector<int> result;

        // count the frequency of each in num1
        for (int num : num1)
            freq[num]++;

        // check each element in num2 against the ferq map
        for (int num : nums2)
        {
            if (freq[num] > 0)
            {
                result.push_back(num);
                freq[num]--;
            }
        }

        // sort the result
        sort(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> num1 = {1, 2, 3, 3, 32, 1};
    vector<int> num2 = {2, 1, 3, 2};

    vector<int> result = sol.intersect(num1, num2);

    // print the result
    cout << "Intersection : ";
    for (int num : result)
        cout << num << " ";
    cout << endl;
}