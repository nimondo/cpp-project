#include <iostream>
#include <vector>

using namespace std;

vector< char > mySubstr( vector< char > const& a,int p, int l)
{
    vector < char > c ;
    if(p<0 || l<0){
        return c;
    }
    if(l> a.size()){
        return c;
    }
    for (int i(p); i<l; i++){
        c.push_back(a[i]);
    }
    return c;
}



int main()
{
    vector < char >  b;
    b.push_back('a');
    b.push_back('b');
    b.push_back('c');
    vector <char> log = mySubstr(b,0,1);
    for (int i(0); i<log.size(); i++){
        cout <<log[i];
    }
    return 0;
}
