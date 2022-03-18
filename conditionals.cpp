#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter a value for a: ";
    cin >> a;

    cout << "Enter a value for b: ";
    cin >> b;

    if(a > b)
    {
        cout << a << " > " << b << endl;
    }
    else
    {
        cout << a << " < " << b << endl;
    }

    return 0;
}