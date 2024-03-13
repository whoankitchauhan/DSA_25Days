#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
  if (n < 0)
    return false;
  int rev = 0;
  int num = n;
  int lDigit = 0;
  while (num > 0) {
    lDigit = num % 10;
    rev = (rev * 10) + lDigit;
    num = num / 10;
  }

  if (n == rev)
    return true;
  else
    return false;
}


int main()
{

    cout << palindrome(12321);
    return 0;
}