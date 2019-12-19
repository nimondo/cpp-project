#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s = "12345";

    // object from the class stringstream
    stringstream nimondo(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    nimondo >> x;
    int b = x;
    // Now the variable x holds the value 12345
    cout << "Value of x : " << b;

    return 0;
}
