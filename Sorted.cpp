#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
    {
      cin >> a[j];
    }

    bool isAscSorted = true;

    for (int k = 0; k < n; k++)
    {
      if (k != n)
      {
        if (a[k] < a[k + 1] || a[k] == a[k + 1])
        {
          isAscSorted = true;
        }
        else
        {
          isAscSorted = false;
          break;
        }
      }
    }

    string output = isAscSorted ? "YES" : "NO";

    cout << output << endl;
  }
  return 0;
}

// Problem Statement

// You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

// Input Format

// First line will contain T, the number of test cases.
// The first line of each test case will contain N.
// The second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 1000
// 1 <= N <= 1000
// 0 <= A[i] <= 1000; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.
// Sample Input 0

// 3
// 5
// 2 4 6 7 10
// 8
// 1 100 101 120 120 121 1000 1000
// 4
// 100 1 102 12
// Sample Output 0

// YES
// YES
// NO