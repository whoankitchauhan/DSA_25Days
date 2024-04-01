#include <bits/stdc++.h>

using namespace std;

// Function to find the length of the longest subarray with sum equal to k
int getLongestSubarray(vector<int> &nums, int targetSum)
{
    map<int, int> sumIndexMap; // Map to store prefix sum and its index
    int currentSum = 0;        // Initialize the current sum
    int maxSubarrayLength = 0; // Initialize the maximum length of subarray with sum equal to k

    // Iterate through the array
    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i]; // Add the current element to the current sum

        // If the current sum equals the target sum, update the maxSubarrayLength
        if (currentSum == targetSum)
        {
            maxSubarrayLength = i + 1; // Update maxSubarrayLength to include the current element
        }

        // Calculate the remainder required for sum to be the target sum
        int remainder = currentSum - targetSum;

        // If the remainder exists in the map, update maxSubarrayLength if needed
        if (sumIndexMap.find(remainder) != sumIndexMap.end())
        {
            int subarrayLength = i - sumIndexMap[remainder];            // Calculate the length of subarray with sum targetSum
            maxSubarrayLength = max(maxSubarrayLength, subarrayLength); // Update maxSubarrayLength if the current subarray is longer
        }

        // If the current sum is not in the map, add it with its corresponding index
        if (sumIndexMap.find(currentSum) == sumIndexMap.end())
        {
            sumIndexMap[currentSum] = i; // Store the index of the current sum
        }
    }
    return maxSubarrayLength; // Return the maximum length of subarray with sum equal to targetSum
}

int main()
{
    // Example usage
    vector<int> nums = {1, -1, 5, -2, 3};
    int targetSum = 3;

    // Find the longest subarray with sum equal to targetSum
    int longestSubarrayLength = getLongestSubarray(nums, targetSum);

    // Output the result
    cout << "Longest subarray with sum " << targetSum << " has length: " << longestSubarrayLength << endl;

    return 0;
}
