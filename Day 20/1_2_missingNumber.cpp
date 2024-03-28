#include <iostream>
#include <vector>

using namespace std;

// Function to find the missing number in a sorted array
int missingNumber(vector<int> &a, int N)
{
    // Initialize two XOR variables to store XOR of array elements and numbers from 1 to N
    int XOR1 = 0, XOR2 = 0;

    // Calculate XOR of array elements
    // XOR1 will contain XOR of all elements from 1 to N
    // XOR2 will contain XOR of all elements in the array
    int n = N - 1; // Size of the array is N - 1
    for (int i = 0; i < n; i++)
    {
        XOR2 ^= a[i];
        XOR1 ^= (i + 1);
    }

    // XOR1 will contain XOR of all numbers from 1 to N
    // XOR2 will contain XOR of all elements in the array except the missing number
    // XOR of XOR1 and XOR2 will give the missing number
    XOR1 = XOR1 ^ N;
    return XOR1 ^ XOR2;
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
