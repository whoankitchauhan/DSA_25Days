#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &a, int N)
{
    for (int i = 1; i <= N; i++)
    {
        int miss = -1;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == i)
            {
                miss = 0;
                break;
            }
        }
        if (miss == -1)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    // Example usage
    vector<int> arr = {1, 2, 3, 5}; // Array with a missing number
    int N = 5;                      // Size of the array

    int missing = missingNumber(arr, N);
    if (missing != 0)
    {
        cout << "The missing number is: " << missing << endl;
    }
    else
    {
        cout << "No missing number found." << endl;
    }

    return 0;
}
