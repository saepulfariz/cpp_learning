#include <iostream>

using namespace std;

int add(int var1, int var2)
{
    return var1 + var2;
}

int add(int var1, int var2, int var3)
{
    return var1 + var2 + var3;
}

string add(string var1, string var2)
{
    return var1 + " add " + var2;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(5, 4, 3) << endl;
    cout << add("one", "two") << endl;

    return 0;
}