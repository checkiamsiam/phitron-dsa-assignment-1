#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  long long int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  long long int prefixSumA[n];

  for (int i = 0; i < n; i++)
  {

    if (i == 0)
    {
      prefixSumA[i] = a[i];
    }
    else
    {
      prefixSumA[i] = a[i] + prefixSumA[i - 1];
    }
  }

  reverse(prefixSumA, prefixSumA + n);

  for (long long int i : prefixSumA)
  {
    cout << i << " ";
  }

  return 0;
}

// Problem Statement

// You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

// Input Format

// First line will contain N.
// Next line of contain the array A.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output the prefix sum array in reverse order.
// Sample Input 0

// 5
// 2 4 1 5 3
// Sample Output 0

// 15 12 7 6 2
// Explanation 0

// The prefix sum of the given array is: 2 6 7 12 15.
// The reverse order is: 15 12 7 6 2.
// Sample Input 1

// 3
// 1000000000 1000000000 1000000000
// Sample Output 1

// 3000000000 2000000000 1000000000