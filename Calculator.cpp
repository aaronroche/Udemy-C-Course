
#include <iostream>
using namespace std;

int main()
{
    beginning:

    double num1, num2;

    cout << "Enter a value: ";
    cin >> num1;

    cout << "Enter another value: ";
    cin >> num2;

    cout << "\n+ | addition" << endl;
    cout << "- | subtraction" << endl;
    cout << "* | multiplication" << endl;
    cout << "/ | division" << endl;

    cout << "\nChoose one of the operators above: ";

    char op;
    cin >> op;

    switch (op)
    {
        case '+':
            cout << "\n" << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;

        case '-':
            cout << "\n" << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;

        case '*':
            cout << "\n" << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;

        case '/':
            if(num2) // same as num2 != 0
                cout << "\n" << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            else
                cout << "You cannot divide by 0" << endl;

            break;

        default:
            cout << "\n" << "You typed in the wrong char!!" << endl;
    }

    char dec1;

    cout << "\nWould you like to complete another operation? (Y|N): ";
    cin >> dec1;

    if (dec1 == 'y' || dec1 == 'Y')
        goto beginning;
    else if (dec1 == 'n' || dec1 == 'N')
        cout << "Have a nice day!" << endl;
    else
        cout << "Please enter a valid character" << endl;

}