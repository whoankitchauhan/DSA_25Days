

#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum number of consecutive ones in a binary array
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int max1 = 0;  // Variable to store the maximum consecutive ones
    int count = 0; // Counter for the current consecutive ones

    // Iterate through the elements of the array
    for (int i = 0; i < nums.size(); i++)
    {
        // If the current element is 1, increment the count of consecutive ones
        if (nums[i] == 1)
        {
            count++;
            // Update the maximum consecutive ones if the current count is greater
            max1 = max(max1, count);
        }
        else
        {
            // If the current element is not 1, reset the count of consecutive ones
            count = 0;
        }
    }

    // Return the maximum consecutive ones found
    return max1;
}

// Main function to demonstrate the usage of the findMaxConsecutiveOnes function
int main()
{
    // Example binary array
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};

    // Find the maximum consecutive ones in the array
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);

    // Output the result
    cout << "Maximum consecutive ones: " << maxConsecutiveOnes << endl;

    return 0;
}
