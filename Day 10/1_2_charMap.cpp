
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Prompt the user to enter the size of the array
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;

    // Prompt the user to enter the characters
    cout << "Enter " << n << " characters separated by spaces: ";
    if (cin.peek() == '\n')
        cin.ignore();

    // Map to store the frequency of each character
    map<char, int> charFrequencyMap;
    while (n--)
    {
        char c;
        cin >> c;
        charFrequencyMap[c]++;
    }

    // Print the frequency of each character
    cout << "Frequency of characters:" << endl;
    for (auto itr = charFrequencyMap.begin(); itr != charFrequencyMap.end(); ++itr)
    {
        cout << "Character: " << itr->first << ", Count: " << itr->second << endl;
    }

    return 0;
}
