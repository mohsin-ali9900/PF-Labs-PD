#include <iostream>
#include <windows.h>
using namespace std;

int checkdigits(int,int);

main()
{
    int num,digit;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enetr the digit";
    cin>>digit;

    int result=checkdigits(num,digit);
    cout<<result;
}

int checkdigits(int num,int digit)
{
    int right;
    int counter = 0;
    while(num != 0)
    {
        right = num%10;
        if( digit == right)
        {
            counter++;
        }
        num = num /10;
    }
    return counter;
}