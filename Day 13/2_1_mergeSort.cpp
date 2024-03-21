#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves of the array into a single sorted array
void merge(vector<int> &arr, int l, int m, int r)
{
    // Determine the number of elements in the first half
    int num1 = m - l + 1;
    // Determine the number of elements in the second half
    int num2 = r - m;

    // Create temporary arrays to store the halves
    vector<int> L(num1), R(num2);

    // Copy data from the original array into temporary arrays
    for (int i = 0; i < num1; ++i)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < num2; ++j)
    {
        R[j] = arr[m + 1 + j];
    }

    // Merge the two sorted halves back into the original array
    int i = 0; // Initial index of the first half
    int j = 0; // Initial index of the second half
    int k = l; // Initial index of the merged array

    // Compare elements from both halves and merge them in sorted order
    while (i < num1 && j < num2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the first half
    while (i < num1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the second half
    while (j < num2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive function to sort the array using merge sort
void mergeSort(vector<int> &arr, int l, int r)
{
    // Base case: If there is only one element or the array is empty, it is already sorted
    if (l < r)
    {
        // Find the middle index of the array
        int m = (l + r) / 2;

        // Recursively sort the first half
        mergeSort(arr, l, m);
        // Recursively sort the second half
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main()
{
    // Example usage
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Perform merge sort
    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
