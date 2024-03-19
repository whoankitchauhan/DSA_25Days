#include <iostream>
using namespace std;

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int n)
{
    // Iterate through the array
    for (int i = 0; i < n - 1; i++)
    {
        // Find the index of the minimum element in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    // Input the number of elements in the array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input the elements of the array
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform Selection Sort
    selectionSort(arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
