#include <iostream>
#include <vector>

using namespace std;

// Function to rotate the array to the left by 'k' steps
vector<int> rotateArray(vector<int> arr, int k)
{
    // Create a new array to store the rotated elements
    vector<int> b(arr.size());

    // Iterate through each element of the input array
    for (int i = 0; i < arr.size(); i++)
    {
        // Calculate the new index in the rotated array
        // Using modular arithmetic to handle wrap-around
        int newIndex = (i + (arr.size() - k)) % arr.size();
        // Assign the value of the element at index 'i' in the input array
        // to the calculated index in the rotated array
        b[newIndex] = arr[i];
    }

    // Return the rotated array
    return b;
}

int main()
{
    // Test cases
    vector<vector<int>> testCases = {
        {7, 5, 2, 11, 2, 43, 1, 1}, // Input array 1
        {5, 6, 7, 8}                // Input array 2
    };

    int k_values[] = {2, 3}; // Corresponding k values for each test case

    // Rotate arrays in test cases
    for (int i = 0; i < testCases.size(); i++)
    {
        cout << "Test Case " << i + 1 << ":" << endl;

        // Original array
        cout << "Original Array: ";
        for (int num : testCases[i])
        {
            cout << num << " ";
        }
        cout << endl;

        // Rotate the array with the current test case and k value
        vector<int> rotatedArr = rotateArray(testCases[i], k_values[i]);

        // Print the rotated array
        cout << "Rotated Array: ";
        for (int num : rotatedArr)
        {
            cout << num << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}
