// String is palidrome or not.
#include <iostream>
using namespace std;

string isPalidrom(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - i - 1])
            return "No";

        return "Yes";
    }
}
int main()
{

    string str;
    cout << "Enter string : ";
    cin >> str;

    cout << isPalidrom(str);
}