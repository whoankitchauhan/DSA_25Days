#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

string read(int n, vector<int> &book, int target) {
    unordered_set<int> seen; // Create an unordered set to store seen book pages
    for (int i = 0; i < n; ++i) { // Iterate through each book
        int complement = target - book[i]; // Calculate the complement needed to reach the target
        if (seen.find(complement) != seen.end()) { // Check if the complement is in the set
            return "YES"; // If found, return "YES"
        }
        seen.insert(book[i]); // Otherwise, add the current book page to the set
    }
    return "NO"; // If no such pair is found, return "NO"
}

int main() {
    // Example usage
    int n = 5;
    vector<int> book = {4, 1, 2, 3, 1};
    int target = 5;

    // Check if there exists a pair of books whose pages sum up to the target
    string result = read(n, book, target);

    // Output the result
    cout << result << endl;

    return 0;
}
