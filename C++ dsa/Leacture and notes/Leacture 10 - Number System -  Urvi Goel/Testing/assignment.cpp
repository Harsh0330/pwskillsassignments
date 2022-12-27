#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1) Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 5; i++)
//     {
//         sum += i;
//     }
//     int ans = 0;
//     int power = 1;
//     while (sum > 0)
//     {
//         int pari = sum % 2;
//         ans += pari * power;
//         power *= 10;
//         sum /= 2;
//     }
//     cout << ans << endl;
// }

// 2)iven a natural number, find the number of 0’s in the binary representation of that number

// int main()
// {
//     int num;
//     cin >> num;
//     int count=0;
//     while(num>0){
//         int pari = num%2;
//         cout<<"pari : "<<pari<<endl;
//         if(pari==0){
//             count++;
//         }
//         num/=2;
//     }
//     cout<<count<<endl;
// }

// 3)Given two binary numbers, return the greatest of these numbers in decimal format.

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int power1 = 1;
    int answer1 = 0;
    int power2 = 1;
    int answer2 = 0;
    while (num1 > 0)
    {
        int pari = num1 % 10;
        answer1 += pari * power1;
        power1 *= 2;
        num1 /= 10;
    }
    cout << answer1 << endl;
    while (num2 > 0)
    {
        int pari = num2 % 10;
        answer2 += pari * power2;
        power2 *= 2;
        num2 /= 10;
    }
    cout << answer2 << endl;
    if (answer1 > answer2)
    {
        cout << answer1 << endl;
    }
    else
    {
        cout << answer2 << endl;
    }
}