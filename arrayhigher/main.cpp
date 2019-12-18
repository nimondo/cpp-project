#include <iostream>
#include <vector>

using namespace std;

int secondHigher(vector < unsigned int > const& a)
{
    unsigned int b = a[0];
    unsigned int c = 0;
    for(int i(1); i<a.size(); i++){
        if(a[i]>b){
            c = b;
            b = a[i];
        }else if(a[i]>c){
                c = a[i];
        }
    }
    if(b == c){
        return -1;
    }else if(b<c){
        return b;
    }else{
        return c;
    }
}
int main()
{
    vector<unsigned int> b;
    b.push_back(4);
    b.push_back(0);
    b.push_back(2);
    b.push_back(3);
    int log = secondHigher(b);
    cout << log;
    return 0;
}
