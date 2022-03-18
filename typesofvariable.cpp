
#include <iostream>

using namespace std;

int main()
{
    int a = 40, b = 0, c = 20;

    cout << "a: " << a << " adress: " << &a << endl;
    cout << "b: " << b << " adress: " << &b << endl;
    cout << "c: " << c << " adress: " << &c << endl;

    short t1 = 5;
    cout << t1 << endl;

    float t2 = 5.12;
    double t3 = 5.122352351;

    cout << t2 << endl;
    cout << t3 << endl;

    char t4 = 'a';
    cout << t4 << endl;

    string t5 = "Hello world! :-)";
    cout << t5 << endl;

    string x = "part 1";
    string y = "part 2";
    string combinedStrings = x + " " +y;
    cout << combinedStrings << endl;

    bool t6 = 242436;
    cout << t6 << endl;

    // for unassigned short int
    unsigned short int t7 = 3700;
    cout << t7 << endl;

    unsigned short t8 = 3800;
    cout << t8 << endl;

    const string NAMEOFGAME = "Capture the Flag";
    cout << NAMEOFGAME << endl;
    //NAMEOFGAME = "something";
}