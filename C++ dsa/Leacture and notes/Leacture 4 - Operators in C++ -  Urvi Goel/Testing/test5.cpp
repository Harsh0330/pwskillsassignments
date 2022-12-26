#include <iostream>

using namespace std;

int main()
{
  int p = 3, r = 1, q = 1;
  int s=p-++r-++q;
  cout << s << endl;
  return 0;
}