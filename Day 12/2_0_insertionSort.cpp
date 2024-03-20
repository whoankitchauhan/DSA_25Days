#include <iostream>
using namespace std;

void insertionSort(int arr[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int arr[N];
    cout << "Enter the elements:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    // Call insertion sort function
    insertionSort(arr, N);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
