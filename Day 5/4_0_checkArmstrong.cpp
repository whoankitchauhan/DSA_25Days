#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n) {

  int sum = 0;
  int temp1 = n; // Count Digit
  int temp2 = n; // original Number
  int count = 0;

  while (n > 0) {
    n /= 10;
    count++;
  }
  while (temp1 != 0) {
    int digit = temp1 % 10;
    sum = sum + pow(digit, count);
    temp1 /= 10;
  }

  return (sum == temp2);
}

int main()
{

    cout << checkArmstrong(1);
    return 0;
}