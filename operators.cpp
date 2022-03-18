
#include <iostream>

using namespace std;

//main functions
int main()
{
    //Instantiate variables
    int a = 10;
    int b = 4;

    cout << a + b << endl; //addition
    cout << a - b << endl; //subtraction
    cout << a * b << endl; //multiplication
    cout << a / b << endl; //division

    cout << a % b << endl; //modulo

    int c = 1;
    c += 1; // same as c = c + 1
    cout << c << endl;

    int d = 1;
    ///cout << d++ << endl; //POSTincrementation (can also do with --)
    cout << ++d << endl;    //PREincrementation (can also do with --)

    return 0;
}