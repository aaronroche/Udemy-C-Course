
#include <iostream>
using namespace std;

int main()
{
    const int SIZEOFARRAY = 10;
    int i = 0;
    int array[SIZEOFARRAY];

    while (i < SIZEOFARRAY)
    {
        array[i] = 10 * i;
        cout << array[i++] << endl;
    }

    /*
    do
    {
        cout << "Aaron" << endl;
    } while (i);
    */ 
}