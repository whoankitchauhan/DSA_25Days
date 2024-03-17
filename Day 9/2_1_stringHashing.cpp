#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Initialize an array to count occurrences of lowercase alphabets
    int hash[26] = {0};

    // Count occurrences of each lowercase alphabet in the input string
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Respond to queries regarding the count of specific characters
    while (q--)
    {
        char c;
        cout << "Enter a character to query its count: ";
        cin >> c;

        // Output the count of the queried character
        cout << "Count of '" << c << "' in the string: " << hash[c - 'a'] << endl;
    }

    return 0;
}
