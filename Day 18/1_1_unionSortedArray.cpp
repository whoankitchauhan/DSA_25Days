#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    // Initialize two pointers for arrays 'a' and 'b'
    int i = 0, j = 0;

    // Declare a vector to store the union of elements
    vector<int> unionArray;

    // Traverse both arrays until one of them reaches its end
    while (i < a.size() && j < b.size()) {
        // If the current element of 'a' is smaller, add it to the unionArray
        if (a[i] < b[j]) {
            unionArray.push_back(a[i]);
            i++; // Move to the next element in 'a'
        }
        // If the current element of 'b' is smaller, add it to the unionArray
        else if (a[i] > b[j]) {
            unionArray.push_back(b[j]);
            j++; // Move to the next element in 'b'
        }
        // If both elements are equal, add one to the unionArray and move both pointers
        else {
            unionArray.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of array 'a', if any
    while (i < a.size()) {
        unionArray.push_back(a[i]);
        i++;
    }

    // Add remaining elements of array 'b', if any
    while (j < b.size()) {
        unionArray.push_back(b[j]);
        j++;
    }

    // Remove duplicates from the unionArray
    unionArray.erase(unique(unionArray.begin(), unionArray.end()), unionArray.end());

    // Return the vector containing the union of elements
    return unionArray;
}

int main() {
    // Example input arrays
    vector<int> a = {1, 2, 3, 3};
    vector<int> b = {2, 2, 4};

    // Call the sortedArray function and store the result
    vector<int> result = sortedArray(a, b);

    // Output the result
    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
