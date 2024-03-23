#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Sort the array
    sort(a.begin(), a.end());

    // Find the second largest and second smallest elements
    int secondLargest = a[n - 2];
    int secondSmallest = a[1];

    // Return the result as a vector
    return {secondLargest, secondSmallest};
}

int main()
{
    // Example usage
    vector<int> input1 = {1, 2, 3, 4, 5};
    vector<int> result1 = getSecondOrderElements(5, input1);
    cout << "Output 1: " << result1[0] << " " << result1[1] << endl;

    vector<int> input2 = {3, 4, 5, 2};
    vector<int> result2 = getSecondOrderElements(4, input2);
    cout << "Output 2: " << result2[0] << " " << result2[1] << endl;

    vector<int> input3 = {4, 5, 3, 6, 7};
    vector<int> result3 = getSecondOrderElements(5, input3);
    cout << "Output 3: " << result3[0] << " " << result3[1] << endl;

    return 0;
}
