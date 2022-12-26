#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Binary to decimal
    // int y = to_string(n).length();
    // int rem = 0, temp = 0;
    // for (int i = 0; i < y; i++)
    // {
    //     rem = n % 10;
    //     temp = temp + rem * pow(2, i);
    //     n = n / 10;
    // }
    // cout << temp;
    // int power = 1, ans = 0;
    // while (n > 0)
    // {
    //     int last = n % 10;
    //     ans += last * power;
    //     power *= 2;
    //     n /= 10;
    // }
    // cout << ans;

    int ans = 0, pow = 1;
    while (n > 0)
    {
        int pari = n % 2;
        ans += pari * pow;
        pow *= 10;
        n /= 2;
    }
    cout << ans << endl;
}