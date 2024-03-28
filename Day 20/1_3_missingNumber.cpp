#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to find the missing number in a sorted array
int missingNumber(vector<int> &a, int N)
{
    unordered_set<int> numSet; // Create a set to store elements of the array

    // Insert all elements of the array into the set
    for (int num : a)
    {
        numSet.insert(num);
    }

    // Iterate over numbers from 1 to N and check if each number exists in the set
    // If a number is not found in the set, it is the missing number
    for (int i = 1; i <= N; i++)
    {
        if (numSet.find(i) == numSet.end())
        {
            return i; // Return the missing number
        }
    }

    return -1; // If no missing number found
}

int main()
{
    // Example usage
    vector<int> arr = {1, 2, 4, 5}; // Example array
    int N = 5;                      // Size of the array

    // Find the missing number
    int missing = missingNumber(arr, N);

    // Output the result
    cout << "The missing number is: " << missing << endl;

    return 0;
}
