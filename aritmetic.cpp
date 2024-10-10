#include <iostream>

using namespace std;

int main()
{
    cout << "===============" << endl;
    int a, b, c, d, e, f;

    a = 8 + 4;
    b = 9 - 2;
    c = 2 * 3;
    d = 10 + 3 - 7 * 4;
    e = ((10 + 3) - 7) * 4;
    f = -79;

    cout << "Variable a: " << a << endl;
    cout << "Variable b: " << b << endl;
    cout << "Variable c: " << c << endl;
    cout << "Variable d: " << d << endl;
    cout << "Variable e: " << e << endl;
    cout << "Variable f: " << f << endl;

    double a_double;
    a_double = 8.0 / 3.0;

    cout << "===============" << endl;
    cout << "Variabel a_double: " << a_double << endl;

    cout << "===============" << endl;

    int a_mod, b_mod, c_mod, d_mod;

    a_mod = 8 % 4;
    b_mod = 8 % 5;
    c_mod = 10 % 2;
    d_mod = 100 % 7;

    cout << "Variable a_mod: " << a_mod << endl;
    cout << "Variable b_mod: " << b_mod << endl;
    cout << "Variable c_mod: " << c_mod << endl;
    cout << "Variable d_mod: " << d_mod << endl;

    return 0;
}