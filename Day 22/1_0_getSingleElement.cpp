#include <iostream>
#include <vector>

using namespace std;

// Function to find the single element in an array
int getSingleElement(vector<int> &arr)
{
    // Initialize the answer variable to store the result
    int ans = 0;

    // Iterate through the array
    for (int i = 0; i < arr.size(); i++)
    {
        // Use bitwise XOR operation to find the single element
        // XOR of a number with itself results in 0
        // XOR of any number with 0 results in the number itself
        ans ^= arr[i];
    }

    // Return the single element found
    return ans;
}

int main()
{
    // Example usage
    vector<int> arr = {4, 1, 2, 1, 2}; // Example array with a single element appearing once

    // Find the single element using the getSingleElement function
    int singleElement = getSingleElement(arr);

    // Output the result
    cout << "The single element in the array is: " << singleElement << endl;

    return 0;
}
