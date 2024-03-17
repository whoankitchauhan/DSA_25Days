#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Initialize an array to count occurrences of all ASCII characters
    int hash[256] = {0};

    // Count occurrences of each character in the input string
    for (char c : s) {
        hash[c]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Respond to queries regarding the count of specific characters
    while (q--) {
        char c;
        cout << "Enter a character to query its count: ";
        cin >> c;
        
        // Output the count of the queried character
        cout << "Count of '" << c << "' in the string: " << hash[c] << endl;
    }

    return 0;
}
