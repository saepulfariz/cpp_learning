#include <iostream>

using namespace std;

int add(int var1, int var2)
{
    return var1 + var2;
}

string add(int var1, int var2)
{ // error
    return "test...";
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(5, 4) << endl;

    return 0;
}