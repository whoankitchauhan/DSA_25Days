#include <iostream>

using namespace std;

int main()
{
    // Sample array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Output the space complexity (size of the array)
    cout << "Space complexity: " << sizeof(arr) << " bytes" << endl;

    return 0;
}
