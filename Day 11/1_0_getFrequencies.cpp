#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

// Function to find the highest and lowest frequency elements in a vector
vector<int> getFrequencies(vector<int> &v)
{
    // Map to store frequencies of elements
    unordered_map<int, int> freqMap;

    // Populate the frequency map
    for (int i = 0; i < v.size(); i++)
    {
        freqMap[v[i]]++;
    }

    // Variables to store highest and lowest frequency elements and their frequencies
    int highestFreqElement = -1, highestFreq = -1;
    int lowestFreqElement = -1, lowestFreq = INT_MAX;

    // Iterate through the frequency map to find highest and lowest frequency elements
    for (auto it : freqMap)
    {
        int value = it.second;

        // Update highest frequency element
        if (value > highestFreq)
        {
            highestFreq = value;
            highestFreqElement = it.first;
        }
        else if (value == highestFreq && it.first < highestFreqElement)
        {
            highestFreqElement = it.first;
        }

        // Update lowest frequency element
        if (value < lowestFreq)
        {
            lowestFreq = value;
            lowestFreqElement = it.first;
        }
        else if (value == lowestFreq && it.first < lowestFreqElement)
        {
            lowestFreqElement = it.first;
        }
    }

    // Return the highest and lowest frequency elements
    return {highestFreqElement, lowestFreqElement};
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
