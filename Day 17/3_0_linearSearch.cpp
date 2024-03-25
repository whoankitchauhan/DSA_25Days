#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    vector<int> arr = {2, 3, 5, 7, 11, 13, 17, 19}; // Example array
    int n = arr.size();
    int target = 11; // Element to search for

    cout << "Array elements: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    int index = linearSearch(n, target, arr); // Perform linear search

    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
