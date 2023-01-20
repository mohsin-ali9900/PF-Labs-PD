#include <iostream>
#include <windows.h>
using namespace std;

int checkdigits(int);

main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int result=checkdigits(num);
    cout<<result;
}

int checkdigits(int num)
{
    int rem=0;
    int sum=0;
    while(num!=0)
    {
    
        rem = num%10;
        num = num/10;
        sum = sum + rem; 

       
    }
     return sum;
}