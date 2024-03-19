#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
    // Declare an unordered map to store frequencies
    unordered_map<int, int> freq;

    // Count frequencies of elements in the array
    for (int num : v)
    {
        freq[num]++;
    }

    // Initialize variables to track maximum and minimum frequencies
    int maxFreq = 0, minFreq = v.size();
    int maxElement = 0, minElement = INT_MAX;

    // Traverse through the frequency map to find maximum and minimum frequencies
    for (auto &pair : freq)
    {
        int element = pair.first;
        int count = pair.second;

        // Update maximum frequency element
        if (count > maxFreq || (count == maxFreq && element < maxElement))
        {
            maxElement = element;
            maxFreq = count;
        }

        // Update minimum frequency element
        if (count < minFreq || (count == minFreq && element < minElement))
        {
            minElement = element;
            minFreq = count;
        }
    }

    return {maxElement, minElement};
}

int main()
{
    // Example input vector
    vector<int> v = {1, 2, 3, 1, 1, 4};

    // Find highest and lowest frequency elements
    vector<int> result = getFrequencies(v);

    // Output the results
    cout << "Highest frequency element: " << result[0] << endl;
    cout << "Lowest frequency element: " << result[1] << endl;

    return 0;
}
