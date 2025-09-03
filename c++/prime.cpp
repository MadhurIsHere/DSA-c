#include <iostream>
using namespace std;
int main()
{
    // to check if a is prime or not 
    int n;
    cout << "Enter the number";
    cin >> n;
    bool flag=true;
    if(n<=1)
    {
        cout << "Not a prime number";
    }
    else{
        for (int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=false;
            }
        }
    }
    if(flag)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";
    }
    return 0;
}