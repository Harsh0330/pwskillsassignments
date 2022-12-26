#include <iostream>

using namespace std;

int main()
{
  bool exp1 = true, exp2 = false;
  cout << "exp1 && exp2 = " << (exp1 && exp2) << endl;
  cout << "exp1 || exp2 = " << (exp1 || exp2) << endl;
  cout << "!exp1 = " << !exp1 << endl;
  cout << "!exp2 = " << !exp2 << endl;
  return 0;
}