#include <iostream>
using namespace std;
int main()
{
    // reverse a number
    int n;
    cout << "Enter the number";
    cin >> n;
    int c=0;
    while(n>0)
    {
        int r=n%10;
        c=c*10+r;
        n/=10;
    }
    cout << c;
    return 0;
}