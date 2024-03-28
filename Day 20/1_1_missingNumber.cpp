#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &a, int N)
{
    // Calculate the sum of all elements in the array
    int sumOfArray = 0;
    for (int i = 0; i < N - 1; i++)
    {
        sumOfArray += a[i];
    }

    // The expected sum of consecutive numbers from 1 to N
    int expectedSum = (N * (N + 1)) / 2;

    // The missing number is the difference between the expected sum and the sum of the array
    int missing = expectedSum - sumOfArray;
    return missing;
}

int main()
{
    // Example usage
    vector<int> arr = {1, 2, 4, 5};
    int N = 5;

    // Find the missing number
    int missing = missingNumber(arr, N);

    // Output the result
    cout << "The missing number is: " << missing << endl;

    return 0;
}
