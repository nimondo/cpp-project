#include <iostream>
#include <vector>

using namespace std;
int sumArray( vector <int>const& a)
{
  int odd(0);
  int even(0);
  for(int i(0); i<a.size(); i++)
  {
      if(a[i]%2 == 0){
        even += a[i];
      }else{
        odd += a[i];
      }
  }
  return odd-even;
}
int main()
{

    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    int log = sumArray(b);
    cout << log;
    return 0;
}
