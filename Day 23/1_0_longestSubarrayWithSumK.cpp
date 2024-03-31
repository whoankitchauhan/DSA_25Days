#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestSubarrayWithSumK(vector<int> &nums, int k)
{
    unordered_map<int, int> map; // Store cumulative sum and index
    int maxLen = 0;              // Initialize the maximum length of subarray with sum equal to k
    int currSum = 0;             // Initialize the current sum of elements

    // Add the initial value to the map to handle cases where the subarray starts from index 0
    map[0] = -1;

    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i)
    {
        currSum += nums[i]; // Add the current element to the current sum

        // If the difference between the current sum and k has been seen before,
        // update the maxLen if the current subarray length is longer
        if (map.find(currSum - k) != map.end())
        {
            maxLen = max(maxLen, i - map[currSum - k]);
        }

        // If the current sum is not in the map, add it with its corresponding index
        if (map.find(currSum) == map.end())
        {
            map[currSum] = i;
        }
    }
    // Return the maximum length of subarray with sum equal to k
    return maxLen;
}

int main()
{
    // Example usage
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    // Find the longest subarray with sum equal to k
    int longestLength = longestSubarrayWithSumK(nums, k);

    // Output the result
    cout << "Longest subarray with sum " << k << " has length: " << longestLength << endl;

    return 0;
}
