#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double areaSwitchCase(int ch, const vector<double> &a)
{
    double area = 0.0;

    switch (ch)
    {
    case 1: // Circle
        area = M_PI * a[0] * a[0];
        break;

    case 2: // Rectangle
        area = a[0] * a[1];
        break;
    }

    return area;
}

int main()
{
    int choice;
    cout << "Enter choice (1 for circle, 2 for rectangle): ";
    cin >> choice;

    vector<double> dimensions;

    if (choice == 1)
    {
        cout << "Enter radius: ";
        double radius;
        cin >> radius;
        dimensions.push_back(radius);
    }
    else if (choice == 2)
    {
        cout << "Enter length and breadth: ";
        double length, breadth;
        cin >> length >> breadth;
        dimensions.push_back(length);
        dimensions.push_back(breadth);
    }
    else
    {
        cout << "Invalid choice\n";
        return 1;
    }

    double result = areaSwitchCase(choice, dimensions);

    cout << fixed << setprecision(5) << result << endl;

    return 0;
}
