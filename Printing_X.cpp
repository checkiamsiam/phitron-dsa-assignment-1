#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int run = (n / 2) + 1;

  for (int i = 1; i < run; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j < run)
      {
        if (i == j)
        {
          cout << "\\";
        }
        else
        {
          cout << " ";
        }
      }
      else if (j == run)
      {
        cout << " ";
      }
      else
      {
        if (j == n - i + 1)
        {
          cout << "/";
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++)
  {
    if (i == run)
    {
      cout << "X";
    }
    else
    {
      cout << " ";
    }
  }
  cout << endl;

  for (int i = run - 1; i >= 1; i--)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j < run)
      {
        if (i == j)
        {
          cout << "/";
        }
        else
        {
          cout << " ";
        }
      }
      else if (j == run)
      {
        cout << " ";
      }
      else
      {
        if (j == n - i + 1)
        {
          cout << "\\";
        }
        else
        {
          cout << " ";
        }
      }
    }

    cout << endl;
  }

  return 0;
}

// \   /
//  \ /
//   X
//  / \
// /   \