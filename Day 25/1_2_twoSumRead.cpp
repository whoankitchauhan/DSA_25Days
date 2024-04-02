#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end()); // Sort the book pages

    // Initialize two pointers, one at the beginning and one at the end of the book vector
    int left = 0;
    int right = n - 1;

    // Move the pointers towards each other until they meet or cross
    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            return "YES"; // If the sum equals the target, return "YES"
        }
        else if (sum < target)
        {
            left++; // If the sum is less than the target, move the left pointer to the right
        }
        else
        {
            right--; // If the sum is greater than the target, move the right pointer to the left
        }
    }

    return "NO"; // If no such pair is found, return "NO"
}

int main()
{
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
