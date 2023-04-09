#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Grater number." << endl;
        }
        else
        {
            cout << c << " is Grater number." << endl;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << b << " is Grater number." << endl;
        }
        else
        {
            cout << c << " is Grater number." << endl;
        }
    }
    return 0;
}