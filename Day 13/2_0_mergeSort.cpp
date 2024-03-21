#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1; // Size of the first subarray
    int n2 = right - mid;    // Size of the second subarray

    // Temporary variables to store indices
    int i = left, j = mid + 1, k = left;

    // Merge the two subarrays while elements are present in both
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            // If element in the left subarray is smaller or equal, copy it
            i++;
        }
        else
        {
            // If element in the right subarray is smaller, move it to its correct position
            int temp = arr[j];
            for (int l = j; l > i; l--)
            {
                arr[l] = arr[l - 1];
            }
            arr[i] = temp;
            i++;
            mid++;
            j++;
        }
    }
}

// Merge Sort function
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2; // Calculate the middle index

        // Recursively sort the first half and the second half
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main()
{
    // Input array to be sorted
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    // Display the original array
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Sort the array using Merge Sort
    mergeSort(arr, 0, arr_size - 1);

    // Display the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
