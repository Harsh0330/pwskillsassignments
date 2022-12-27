#include <iostream>
using namespace std;
int main()
{
    // 1)Write a program which takes the values of length and breadth from user and check if it is asquare or not.

    // int a,b;
    // cin >> a >> b;
    // if(a==b)
    //     cout << "it's a square" << endl;
    // else
    //     cout << "it's a rectangle" << endl;

    // 2)Write a program to print absolute value of a number entered by the user.

    // int a;
    // cin >> a;
    // cout << abs(a) << endl;

    // 3)Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculateProfit or Loss

    // int cp, sp;
    // cin >> cp >> sp;
    // if (cp > sp)
    //     cout << ("Loss : ") << cp - sp;
    // else if (cp < sp)
    //     cout << ("Profit : ") << sp - cp;
    // else
    //     cout << "no profit no loss" << endl;

    // 4)Write a program to print positive number entered by the user, if user enters a negative number,it is skipped

    // int a;
    // cin >> a;
    // if (a < 0)
    //     cout << "The number is negative and skipped" << endl;

    // 5)Create a calculator using switch statement to perform addition, subtraction, multiplication and division

    // int num1, num2;
    // cin >> num1;
    // char a;
    // cin >> a;
    // cin >> num2;
    // switch (a)
    // {
    // case '+':
    //     cout << num1 << " + " << num2 << " = " << num1 + num2;
    //     break;
    // case '-':
    //     cout << num1 << " - " << num2 << " = " << num1 + num2;
    //     break;
    // case '*':
    //     cout << num1 << " * " << num2 << " = " << num1 + num2;
    //     break;
    // case '/':
    //     cout << num1 << " / " << num2 << " = " << num1 + num2;
    //     break;
    // default:
    //     break;
    // }

    // 6)Write a program to calculate marks to grades . Follow the conversion rule as given below

    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Your Grade is A+";
    }
    else if (marks >= 80)
    {
        cout << "Your Grade is A";
    }
    else if (marks >= 70)
    {
        cout << "Your Grade is B+";
    }
    else if (marks >= 60)
    {
        cout << "Your Grade is B";
    }
    else if (marks >= 50)
    {
        cout << "Your Grade is C";
    }
    else if (marks >= 40)
    {
        cout << "Your Grade is D";
    }
    else if (marks >= 30)
    {
        cout << "Your Grade is E";
    }
    else if (marks <= 30)
    {
        cout << "Your Grade is F";
    }
    else
    {
        cout << "Enter Valid Marks";
    }
}
