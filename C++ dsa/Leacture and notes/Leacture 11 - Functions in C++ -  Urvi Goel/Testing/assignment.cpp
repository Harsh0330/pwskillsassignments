#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1)Write a function to print squares of the first 5 natural numbers
// void sqr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] * arr[i] << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     sqr(arr, n);
//     return 0;
// }

// 2)Given radius of a circle. Write a function to print the area and circumference of the circle
// void area(int r)
// {
//     float area = 3.14 * r * r;
//     cout << area;
// }
// int main()
// {
//     int r;
//     cin >> r;
//     area(r);
//     return 0;
// }

// 3)Given the age of a person, write a function to check if the person is eligible to vote or not.
// void vote(int age)
// {
//     if (age < 18)
//     {
//         cout << "No";
//     }
//     else
//     {
//         cout << "Yes";
//     }
// }
// int main()
// {
//     int age;
//     cin >> age;
//     vote(age);
//     return 0;
// }

// 4)Given two numbers a and b, write a program using functions to print all the odd numbers
// between them
// void odd(int a, int b)
// {
//     for (int i = a; i <= b; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " ";
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     odd(a, b);
//     return 0;
// }

// 5)Given two numbers a and b, write a program to print all the prime numbers present between
// a and b
// void prime(int a, int b);
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     prime(a, b);
//     return 0;
// }
// void prime(int a, int b)
// {
//     for (int i = a; i <= b; i++)
//     {
//         int flag = 0;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag++;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }