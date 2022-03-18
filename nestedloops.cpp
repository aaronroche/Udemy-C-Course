
#include <iostream>
using namespace std;

int main()
{
    long num1 = 904234523424352345; //18 digits

    int numOfDigits = 1;

    cout << 904 / 10 << endl;
    cout << 90 / 10 << endl;
    cout << 9 / 10 << endl;

    long temp = num1;

    while (temp /= 10)
        numOfDigits++;

    cout << "The number " << num1 << " has " << numOfDigits << " digits!" << endl;

    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
}