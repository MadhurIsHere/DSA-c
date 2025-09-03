#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade";
    cin >> grade;
    if(grade>90)
    {
        cout <<"A+";
    }
    else if (grade>80 && grade<=90)
    {
        cout <<"A";
    }
    else if(grade>70 && grade<=80)
    {
        cout <<"B+";
    }
    else if (grade >60 && grade<=70)
    {
        cout << "B";
    }
    else if (grade >50 && grade<=60)
    {
        cout <<"C";
    }
    else if(grade >40 && grade<=50)
    {
        cout <<"D";
    }
    else 
    {
        cout << "F";
    }
    return 0;
}