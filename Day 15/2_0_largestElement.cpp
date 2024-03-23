#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Declaration and initialization of an array
    int myArray[5] = {10, 30, 20, 50, 40};

    // Method 1: Using iteration
    int largest_iter = myArray[0];
    for (int i = 1; i < 5; ++i)
    {
        if (myArray[i] > largest_iter)
        {
            largest_iter = myArray[i];
        }
    }
    cout << "Method 1: Largest element using iteration: " << largest_iter << endl;

    // Method 2: Using std::max_element
    int *maxElement = max_element(myArray, myArray + 5);
    cout << "Method 2: Largest element using std::max_element: " << *maxElement << endl;

    // Method 3: Using range-based for loop (C++11 and later)
    int largest_range = myArray[0];
    for (int element : myArray)
    {
        if (element > largest_range)
        {
            largest_range = element;
        }
    }
    cout << "Method 3: Largest element using range-based for loop: " << largest_range << endl;

    return 0;
}
