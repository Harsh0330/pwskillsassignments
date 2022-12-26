#include <iostream>
using namespace std;
int main()
{
    // 1)
    // int a,b;
    // cin >> a >> b;
    // if(a==b)
    //     cout << "it's a square" << endl;
    // else
    //     cout << "it's a rectangle" << endl;

    // 2)
    // int a;
    // cin >> a;
    // cout << abs(a) << endl;

    // 3)
    // int cp, sp;
    // cin >> cp >> sp;
    // if (cp > sp)
    //     cout << ("Loss : ") << cp - sp;
    // else if (cp < sp)
    //     cout << ("Profit : ") << sp - cp;
    // else
    //     cout << "no profit no loss" << endl;

    // 4)
    // int a;
    // cin >> a;
    // if (a < 0)
    //     cout << "The number is negative and skipped" << endl;

    // 5)
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

    // 6)
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
