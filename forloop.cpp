#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello!" << endl;
    }

    cout << "lalala" << endl;

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        cout << array[i] << endl;
    }

    return 0;
}