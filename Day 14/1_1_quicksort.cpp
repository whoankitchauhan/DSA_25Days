#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int> &arr, int low, int high)
{
    // Select the pivot element as the last element of the array
    int pivot = arr[high];
    // Initialize an index variable to keep track of the position where elements less than or equal to the pivot will be placed
    int i = low - 1;

    // Iterate through the array from low to high-1
    for (int j = low; j < high; ++j)
    {
        // If the current element is less than or equal to the pivot, swap it with the element at position 'i' and increment 'i'
        if (arr[j] <= pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    // Place the pivot element at its correct position, which is after all elements less than or equal to it
    swap(arr[i + 1], arr[high]);
    // Return the index of the pivot element
    return i + 1;
}

// Recursive function to perform Quick Sort
void quickSort(vector<int> &arr, int low, int high)
{
    // Base case: If low is less than high, there are elements to be sorted
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pivotIndex = partition(arr, low, high);
        // Recursively sort the left partition (elements less than the pivot)
        quickSort(arr, low, pivotIndex - 1);
        // Recursively sort the right partition (elements greater than the pivot)
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print the sorted array
void printArray(const vector<int> &arr)
{
    // Iterate through the array and print each element
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    // Example usage
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arrSize = arr.size();

    // Print the original array
    cout << "Given array is \n";
    printArray(arr);

    // Perform Quick Sort
    quickSort(arr, 0, arrSize - 1);

    // Print the sorted array
    cout << "\nSorted array is \n";
    printArray(arr);

    return 0;
}
