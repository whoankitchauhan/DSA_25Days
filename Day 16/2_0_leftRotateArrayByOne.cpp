#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> &arr, int n)
{
    if (n <= 1) // If the array has 0 or 1 element, no rotation is needed
        return arr;

    int firstElement = arr[0]; // Store the first element

    // Shift elements to the left by one position
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place the stored first element at the end of the array
    arr[n - 1] = firstElement;

    return arr;
}

int main()
{
    // Test case
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    cout << "Original Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the array
    rotateArray(arr, n);

    cout << "Rotated Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
