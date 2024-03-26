#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Function to find the union of two sorted arrays
vector<int> sortedArray(const vector<int> &a, const vector<int> &b)
{
    // Initialize a set to store unique elements from both arrays
    set<int> st(a.begin(), a.end()); // Initialize set with elements of vector a
    st.insert(b.begin(), b.end());   // Insert elements of vector b into set

    // Create a vector from the set to store the union of elements
    vector<int> temp(make_move_iterator(st.begin()), make_move_iterator(st.end()));

    // Return the vector containing the union of elements
    return temp;
}

int main()
{
    // Example input arrays
    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 5};

    // Display the elements of array a
    cout << "Array a: ";
    for (int num : a)
    {
        cout << num << " ";
    }
    cout << endl;

    // Display the elements of array b
    cout << "Array b: ";
    for (int num : b)
    {
        cout << num << " ";
    }
    cout << endl;

    // Find the union of arrays a and b
    vector<int> result = sortedArray(a, b);

    // Display the union of arrays a and b
    cout << "Union of arrays a and b: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
