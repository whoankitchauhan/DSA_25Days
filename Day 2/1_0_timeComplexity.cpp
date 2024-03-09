#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Function to calculate the sum of elements in an array
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // Sample array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Measure the time taken by the function
    auto start_time = high_resolution_clock::now();

    // Call the function
    int result = sumArray(arr, size);

    auto stop_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop_time - start_time);

    // Output the result and time taken
    cout << "Sum: " << result << endl;
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    return 0;
}
