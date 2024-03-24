#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    if (n == 0 || k % n == 0) // No rotation needed if array is empty or k is a multiple of n
        return arr;

    // Adjust k to be within the range [0, n)
    k %= n;

    int temp[k]; // Temporary array to store the first 'k' elements
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by 'k' positions
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // Copy the elements from temp to the end of the array
    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }

    return arr;
}

int main()
{
    // Test cases
    vector<int> arr1 = {7, 5, 2, 11, 2, 43, 1, 1}; // Input array 1
    vector<int> arr2 = {5, 6, 7, 8};               // Input array 2

    int k_values[] = {2, 3}; // Corresponding k values for each test case

    // Rotate arr1 and arr2
    for (int i = 0; i < 2; i++)
    {
        cout << "Test Case " << i + 1 << ":" << endl;

        // Rotate arr1
        cout << "Original Array 1: ";
        for (int num : arr1)
        {
            cout << num << " ";
        }
        cout << endl;
        vector<int> rotatedArr1 = rotateArray(arr1, k_values[i]);
        cout << "Rotated Array 1: ";
        for (int num : rotatedArr1)
        {
            cout << num << " ";
        }
        cout << endl;

        // Rotate arr2
        cout << "Original Array 2: ";
        for (int num : arr2)
        {
            cout << num << " ";
        }
        cout << endl;
        vector<int> rotatedArr2 = rotateArray(arr2, k_values[i]);
        cout << "Rotated Array 2: ";
        for (int num : rotatedArr2)
        {
            cout << num << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}
