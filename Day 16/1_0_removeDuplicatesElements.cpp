#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0) // If the array is empty, no duplicates to remove
        return 0;

    int uniqueIndex = 0; // Pointer to the current unique element in the modified array

    // Iterate through the array from the second element
    for (int i = 1; i < n; i++)
    {
        // If the current element is different from the previous unique element,
        // move it to the next position in the modified array
        if (arr[uniqueIndex] != arr[i])
        {
            // Increment the unique index to move to the next position
            uniqueIndex++;
            // Copy the current element to the next position in the modified array
            arr[uniqueIndex] = arr[i];
        }
    }

    // The length of the modified array is one more than the index of the last unique element
    // Return the length of the modified array
    return uniqueIndex + 1;
}

int main()
{
    // Test cases
    vector<int> arr1 = {1, 2, 2, 2, 3};                // Expected output: 3
    vector<int> arr2 = {1, 1, 2, 3, 3, 3, 4, 4, 5, 5}; // Expected output: 5

    // Output the length after removing duplicates for arr1
    cout << "Length after removing duplicates for arr1: " << removeDuplicates(arr1) << endl;

    // Output the length after removing duplicates for arr2
    cout << "Length after removing duplicates for arr2: " << removeDuplicates(arr2) << endl;

    return 0;
}
