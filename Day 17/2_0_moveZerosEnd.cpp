#include <iostream>
#include <vector>

using namespace std;

// Function to move zeros to the end of the array while maintaining the order of non-zero elements
vector<int> moveZeros(int n, vector<int> a)
{
    // Create a temporary vector to store non-zero elements
    vector<int> temp;

    // Iterate through the array and move non-zero elements to the temp vector
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }

    // Fill the remaining space in temp with zeros
    int numZeros = n - temp.size();
    for (int i = 0; i < numZeros; i++)
    {
        temp.push_back(0);
    }

    return temp; // Return the modified array
}

int main()
{
    // Example usage
    vector<int> arr = {0, 1, 0, 3, 12}; // Input array
    int n = arr.size();                 // Size of the array

    // Print the original array
    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    // Call the moveZeros function to move zeros to the end of the array
    vector<int> result = moveZeros(n, arr);

    // Print the modified array after moving zeros
    cout << "Array after moving zeros to the end: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
