#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "1";
        break;
    }
    case 2:
    {
        cout << "2";
        break;
    }
    case 3:
    {
        cout << "3";
        break;
    }
    default:
        cout << "Unknown";
    }

    return 0;
}