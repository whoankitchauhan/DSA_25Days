#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string &str, int i = 0)
{
    if (i >= str.length() / 2)
        return true;

    if (str[i] != str[str.length() - i - 1])
        return false;

    return isPalindrome(str, i + 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
