#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Prompt the user to enter the size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Prompt the user to enter the elements of the array
    int arr[n];
    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Create a map to store the frequency of each number in the array
    map<int, int> frequencyMap;
    for (int i = 0; i < n; i++)
    {
        frequencyMap[arr[i]]++;
    }


    // Print all key-value pairs in the frequency map
    cout << "Frequency of each number in the array:" << endl;
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        cout << "Number: " << it->first << ", Count: " << it->second << endl;
    }

    // Prompt the user to enter the number of queries
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    // Respond to queries regarding the count of specific numbers
    while (q--)
    {
        int queryNumber;
        cout << "Enter a number to query its count: ";
        cin >> queryNumber;
        cout << "Count of " << queryNumber << " in the array: " << frequencyMap[queryNumber] << endl;
    }

    return 0;
}
