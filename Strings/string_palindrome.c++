#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.size() - 1;
    bool result = true;
    while (start < end)
    {
        if (str[start] == str[end])
        {
            // cout << str << " is palindrome" << endl;
            result = true;
        }
        else
        {
            result = false;
        }
        return result;
    }
}

int main()
{
    string str = "racecars";

    if(isPalindrome(str) == true){
        cout << str << " is palindrome";
    } else {
        cout << str << " is not palindrome";
    }

    return 0;
}