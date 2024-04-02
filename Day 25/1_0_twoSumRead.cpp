#include <iostream>
#include <vector>
using namespace std;

string read(int n, vector<int> book, int target)
{
    for (int i = 0; i < book.size(); i++)
    {
        for (int j = i + 1; j < book.size(); j++)
        {
            if (book[i] + book[j] == target)
                return "YES";
        }
    }
    return "NO";
}

int main()
{
    // Example usage
    int n = 5;
    vector<int> book = {4, 1, 2, 3, 1};
    int target = 5;

    // Check if there exists a pair of books whose pages sum up to the target
    string result = read(n, book, target);

    // Output the result
    cout << result << endl;

    return 0;
}
