#include <iostream>

using namespace std;

#define NAME "Saepulfariz"
#define PANJANG 8
#define LEBAR 5

int main()
{
    const string UNIVERSITY = "Universitas Subang (UNSUB)";
    const double IPK = 3.75;

    cout << "======================";
    cout << "\n";

    cout << "My Name = " << NAME;
    cout << "\n";

    cout << "University : " << UNIVERSITY;
    cout << "\n";

    cout << "GAP = " << IPK;
    cout << "\n";

    cout << "======================";
    cout << "\n";

    cout << "Panjang = " << PANJANG;
    cout << "\n";

    cout << "Lebar = " << LEBAR;
    cout << "\n";

    cout << "Luas (panjang*lebar) = " << PANJANG * LEBAR;
    cout << "\n";

    cout << "======================";
    cout << "\n";

    return 0;
}