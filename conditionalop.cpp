#include <iostream>

using namespace std;

int main()
{
    int a = 60;
    int b = 40;

    string message = (a > b) ? "a > b" : "a <= b";
    
    cout << message << endl;

    cout << ((a > b ? a : b) + 10) << endl;

    return 0;
}