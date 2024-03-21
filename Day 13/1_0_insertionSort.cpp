#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
