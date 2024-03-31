#include <iostream>
#include <vector>

using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k)
{
    int left = 0;      // Initialize the left pointer of the window
    int right = 0;     // Initialize the right pointer of the window
    long long sum = 0; // Initialize the sum of the current subarray
    int maxLength = 0; // Initialize the length of the longest subarray with sum equal to k

    // Iterate through the array using the right pointer
    while (right < a.size())
    {
        // Add the current element to the sum
        sum += a[right];

        // If the sum exceeds k, move the left pointer to the right
        while (sum > k)
        {
            sum -= a[left];
            left++;
        }

        // If the current sum equals k, update the maxLength if needed
        if (sum == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }

        // Move the right pointer to the right
        right++;
    }

    // Return the length of the longest subarray with sum equal to k
    return maxLength;
}

int main()
{
    // Example usage
    vector<int> arr = {1, -1, 5, -2, 3};
    long long k = 3;

    // Find the longest subarray with sum k
    int longestLength = longestSubarrayWithSumK(arr, k);

    // Output the result
    cout << "Length of the longest subarray with sum " << k << " is: " << longestLength << endl;

    return 0;
}
