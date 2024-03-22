#include <iostream>
using namespace std;

// Function to partition the array and return the pivot index
int partitionArray(int input[], int start, int end)
{
    // Select the pivot element (usually the first element)
    int pivot = input[start];
    // Initialize two pointers: one from the start and one from the end
    int i = start; // Pointer for elements less than pivot
    int j = end;   // Pointer for elements greater than pivot

    // Continue until the pointers cross each other
    while (i < j)
    {
        // Move the 'i' pointer until finding an element greater than or equal to the pivot
        while (pivot >= input[i] && i <= end - 1)
        {
            i++;
        }
        // Move the 'j' pointer until finding an element less than the pivot
        while (pivot < input[j] && j >= start + 1)
        {
            j--;
        }
        // Swap the elements at 'i' and 'j' if 'i' is less than 'j'
        if (i < j)
        {
            swap(input[i], input[j]);
        }
    }
    // Swap the pivot element with the element at index 'j' (the correct position of the pivot)
    swap(input[start], input[j]);
    // Return the pivot index
    return j;
}

// Recursive function to perform Quick Sort
void quickSort(int input[], int start, int end)
{
    // Base case: If the start index is less than the end index
    if (start < end)
    {
        // Partition the array and get the pivot index
        int pivotIndex = partitionArray(input, start, end);
        // Recursively sort the left partition (elements less than pivot)
        quickSort(input, start, pivotIndex - 1);
        // Recursively sort the right partition (elements greater than pivot)
        quickSort(input, pivotIndex + 1, end);
    }
}
 
// Function to print the elements of the array
void printArray(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Example usage
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arrSize);

    // Perform Quick Sort
    quickSort(arr, 0, arrSize - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arrSize);

    return 0;
}
