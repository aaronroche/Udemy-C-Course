
#include <iostream>

using namespace std;

//relational operators
int main()
{
    int a = 10;
    int b = 5;

    cout << (a == b) << endl; //true when both values are equal
    cout << (a != b) << endl; //true when both values are not equal
    cout << (a > b) << endl; //true if a is greater than b
    cout << (a < b) << endl; //true if a is less than b
    cout << (a >= b) << endl; //true if a is greater than or equal to b
    cout << (a <= b) << endl; //true if a is less than or equal to b

    cout << !(a == b) << endl; //true when both values are not equal

    
    return 0;
}
