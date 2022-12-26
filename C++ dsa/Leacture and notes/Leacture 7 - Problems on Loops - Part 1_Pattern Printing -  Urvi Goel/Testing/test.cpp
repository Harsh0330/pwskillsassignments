#include <iostream>

using namespace std;

int main()
{
  // int r, c;
  // cin >> r >> c;
  // for (int i = 0; i < r; i++)
  // {
  //   for (int j = 0; j < c; j++)
  //   {
  //     if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
  //     {
  //       cout << "*";
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }
  // return 0;
  // ******
  // *    *
  // *    *
  // *    *
  // ******

  // int r;
  // cin >> r;
  // for (int i = 0; i < r; i++)
  // {
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // return 0;
  // *
  // **
  // ***
  // ****
  // *****

  // int r;
  // cin >> r;
  // for (int i = 0; i < r; i++)
  // {
  //   for (int j = r-1; j >= i; j--)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // return 0;
  // *****
  // ****
  // ***
  // **
  // *

  // int r;
  // cin >> r;
  // for (int i = 1; i <= r; i++)
  // {
  //   for (int j = 0; j < (r - i); j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < (2 * i - 1); j++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  //     *
  //    ***
  //   *****
  //  *******
  // *********

  // int r;
  // cin >> r;
  // for (int i = 1; i <= r; i++)
  // {
  //   for (int j = i; j <= r; j++)
  //   {
  //     cout << j;
  //   }
  //   for (int j = 1; j <= (i - 1); j++)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }
  // 12345
  // 23451
  // 34512
  // 45123
  // 51234

  // int r, c;
  // cin >> r >> c;
  // for (int i = 1; i <= r; i++)
  // {
  //   for (int j = 1; j <= c; j++)
  //   {
  //     if (i == 1 || i == (r - 1) + 1 || j == 1 || j == (c - 1) + 1)
  //     {
  //       cout << j;
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // 123456
  // 1    6
  // 1    6
  // 1    6
  // 1    6
  // 123456

  // int r, c;
  // cin >> r >> c;
  // for (int i = 1; i <= r; i++)
  // {
  //   for (int j = 1; j <= c; j++)
  //   {
  //     if ((i + j) % 2 == 0)
  //     {
  //       cout << "1";
  //     }
  //     else
  //     {
  //       cout << "2";
  //     }
  //   }
  //   cout << endl;
  // }
  // 12121
  // 21212
  // 12121
  // 21212
  // 12121

  // int r, c;
  // cin >> r >> c;
  // for (int i = 1; i <= r; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {

  //     cout << j;
  //   }
  //   cout << endl;
  // }
  // 1
  // 12
  // 123
  // 1234
  // 12345

  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= (n - i); j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << j;
  //   }
  //   for (int j = (i - 1); j >= 1; j--)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }
  //     1
  //    121
  //   12321
  //  1234321
  // 123454321

  // int n, i, j, s;
  // cout << "Enter number of rows to show the star pattern: ";
  // cin >> n;
  // for (i = 1; i <= n; i++)
  // {
  //   // for loop to put space in pyramid
  //   for (s = i; s < n; s++)
  //     cout << " ";
  //   // for loop to print star
  //   for (j = 1; j <= (2 * n - 1); j++)
  //   {
  //     if (i == n || j == 1 || j == 2 * i - 1)
  //       cout << "*";
  //     else
  //       cout << " ";
  //   }
  //   cout << "\n";
  // }
  //    *
  //   * *
  //  *   *
  // *******

  int n, i, j, s;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (s = i; s < n; s++)
    {
      cout << " ";
    }
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (i == n || j == 1 || j == 2 * i - 1)
      {
        cout << i;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  //    1
  //   2 2
  //  3   3
  // 4444444
}