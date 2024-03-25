#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to rotate the array to the left by 'k' steps
vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size(); // Get the size of the array

    // Reverse the first 'k' elements
    reverse(arr.begin(), arr.begin() + k);

    // Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());

    // Reverse the entire array to restore the original order
    reverse(arr.begin(), arr.end());

    return arr; // Return the rotated array
}

int main()
{
    // Example usage
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> rotatedArr = rotateArray(arr, k);

    cout << "Array after rotating by " << k << " steps to the left: ";
    for (int num : rotatedArr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
