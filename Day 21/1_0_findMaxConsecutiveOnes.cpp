#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum number of consecutive ones in a binary array
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int max1 = 0; // Variable to store the maximum consecutive ones

    // Iterate through the elements of the array
    int count = 0;
    for (int num : nums)
    {
        // If the current element is 1, increment count
        // Update max1 if the current count is greater
        if (num == 1)
        {
            count++;
            max1 = max(max1, count);
        }
        else
        {
            // Reset count when encountering a non-one element
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
