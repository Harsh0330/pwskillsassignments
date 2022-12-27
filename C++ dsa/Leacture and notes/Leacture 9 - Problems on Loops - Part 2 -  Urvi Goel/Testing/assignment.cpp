#include <iostream>
using namespace std;
int main()
{
    // 1) Write a program to calculate factorial of a number.

    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n, fact = 1;
    //     cin >> n;
    //     int temp = n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         fact *= i;
    //         cout << "Fact " << i << " : " << fact << endl;
    //     }
    // }

    // 2)Write a program to print all Armstrong numbers between 100 to 500

    // #include <iostream>
    // using namespace std;
    // int main()
    // {

    //     for (int i = 100; i <= 500; i++)
    //     {
    //         int sum = 0;
    //         int temp = i;
    //         while (temp != 0)
    //         {
    //             sum = sum + ((temp % 10) * (temp % 10) * (temp % 10));
    //             temp = temp / 10;
    //         }
    //         if (sum == i)
    //         {
    //             cout << i << endl;
    //         }
    //     }
    // }

    // 3)Write a program to find the sum of n natural number.
    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin >> n;
    //     int sum = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         sum = sum + i;
    //     }
    //     cout << sum;
    // }

    // 4)Write a program to reverse a given integer number

    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n, a = 0;
    //     cin >> n;
    //     int temp = n;
    //     while (n > 0)
    //     {
    //         temp = n % 10;
    //         a = a * 10 + temp;
    //         n = n / 10;
    //     }
    //     cout << a;
    // }

    // 5)Write a program to print the cross pattern given below (in the shape of X)

    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i == j || i + j == n - 1)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         cout << endl;
    //     }
    // }

    // 6)Write a program to print alphabet diamond pattern

    // int size;
    // cin >> size;
    // int alpha = 65;
    // int num = 0;
    // for (int i = 1; i <= size; i++)
    // {
    //     for (int j = size; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i * 2 - 1; k++)
    //     {
    //         cout << ((char)(alpha + num++));
    //     }
    //     num = 0;
    //     cout << "\n";
    // }
    // for (int i = 1; i <= size - 1; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = (size - i) * 2 - 1; k > 0; k--)
    //     {
    //         cout << ((char)(alpha + num++));
    //     }
    //     num = 0;
    //     cout << "\n";
    // }

    // 7)Write a program to print + pattern given below

    // int n, i, j;
    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (i == n / 2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             if (j == n / 2)
    //             {
    //                 cout << "*";
    //             }
    //             else

    //             {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // 8)Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

    // int x1;
    // int x2;
    // int x3;
    // int Number = 3;
    // int Banner = 0;
    // cout << "Please enter the no of lines ";
    // cin >> x1;
    // int d = x1;
    // for (x2 = 1; x2 <= x1; x2++)
    // {
    //     for (int e = 1; e <= d; e++)
    //     {
    //         cout << " ";
    //     }
    //     if (x2 == 1)
    //     {
    //         cout << "2\n";
    //     }
    //     else
    //     {
    //         for (x3 = 0; x3 != x2;)
    //         {
    //             Banner = 0;
    //             for (int k = 2; k < Number; k++)
    //             {
    //                 if ((Number % k) == 0)
    //                     Banner = 1;
    //             }
    //             if (Banner == 0)
    //             {
    //                 x3++;
    //                 cout << Number << " ";
    //             }
    //             Number++;
    //         }
    //         cout << "\n";
    //     }
    //     d--;
    // }

    // 9)Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
    // int num, i, j;
    // int f1 = 1, f2 = 1, f3 = 0;
    // cout << "Enter a +ve Integar : ";
    // cin >> num;
    // i = 3;
    // do
    // {
    //     f1 = 1;
    //     f2 = 1;
    //     j = 2;
    //     do
    //     {
    //         if (i % j == 0)
    //         {
    //             f1 = 0;
    //             j = i;
    //         }
    //         j = 2;
    //         do
    //         {
    //             if ((num - i) % j == 0)
    //             {
    //                 f2 = 0;
    //                 j = num - i;
    //             }
    //             j++;
    //         } while (j < num - i);
    //         if (f1 == 1 && f2 == 1)
    //         {
    //             cout << num << " = " << i << " + " << num - i << endl;
    //             f3 = 1;
    //         }
    //         j++;
    //     } while (j < i);
    //     i++;
    // } while (i <= num / 2);
    // if (f3 == 0)
    // {
    //     cout << num << " can not be expressed as sum of two prime numbers.";
    // }

    // 10)Write a C++ program to print a rectangle out of *
    // int i, j, a, b;
    // cin >> a >> b;
    // for (i = 1; i <= a; i++)
    // {
    //     for (j = 1; j <= b; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}
