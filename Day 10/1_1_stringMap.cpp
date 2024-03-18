#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Prompt the user to enter the size of the array
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    // Prompt the user to enter the strings
    cout << "Enter " << n << " strings separated by spaces: ";
    if (cin.peek() == '\n')
        cin.ignore();

    // Map to store the frequency of each string
    map<string, int> stringFrequencyMap;
    while (n--)
    {
        string s;
        cin >> s;
        stringFrequencyMap[s]++;
    }

    // Print the frequency of each string
    cout << "Frequency of strings:" << endl;
    for (auto itr = stringFrequencyMap.begin(); itr != stringFrequencyMap.end(); ++itr)
    {
        cout << "String: " << itr->first << ", Count: " << itr->second << endl;
    }

    return 0;
}
