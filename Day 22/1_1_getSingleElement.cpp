#include <iostream>
#include <vector>

using namespace std;

// Function to find the single element in an array
int getSingleElement(vector<int> &arr)
{
    int n = arr.size(); // Get the size of the array
    int i = 0;          // Initialize a variable to traverse the array

    // Traverse the array
    while (i < n)
    {
        // Check if the current element is equal to the previous element
        if (arr[i] == arr[i - 1])
            i = i + 2; // If true, move two steps forward
        else
        {
            // Check if the current element is equal to the next element
            if (arr[i] == arr[i + 1])
                i = i + 2; // If true, move two steps forward
            else
            {
                return arr[i]; // If neither of the above conditions is true, return the current element
            }
        }
    }
}

int main()
{
    // Example usage
    vector<int> arr = {2, 2, 1, 3, 1};                          // Array with a single element 3
    int singleElement = getSingleElement(arr);                  // Get the single element
    cout << "The single element is: " << singleElement << endl; // Output the result
    return 0;
}
