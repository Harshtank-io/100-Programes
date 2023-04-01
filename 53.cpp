// distance between two number
#include <iostream>

using namespace std;

void distance(int n1, int n2)
{
    int result;
    int distance = 0;
    int an = 0;
    result = n1 ^ n2;

    while (result > 0)
    {
        // method 1
        an = result & 1;
        distance += an;

        // method 2
        // distance += (result & 1);

        result >>= 1;
    }
    cout << distance;
}

int main()
{
    int n1, n2;
    cout << "Enter the 2 number: ";
    cin >> n1 >> n2;

    distance(n1, n2);
}