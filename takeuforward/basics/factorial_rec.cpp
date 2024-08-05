#include <bits/stdc++.h>
#include "Timer.h"

using namespace std;

int factorial(int n)
{
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int factorial_iterative(int n)
{
  if (n == 0)
  {
    return 1;
  }
  stack<int> s;
  while (n != 0)
  {
    s.push(n);
    n--;
  }
  int res = 1;
  while (!s.empty())
  {
    res = res * s.top();
    s.pop();
  }
  return res;
}

int main()
{

  // Here, let’s take the value of n to be 3.
  int n = 5;
  cout << "Result of factorial: " << factorial(n) << endl;
  cout << "Result of factorial (iterative): " << factorial_iterative(n) << endl;
  return 0;
}