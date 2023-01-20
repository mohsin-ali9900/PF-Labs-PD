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
    int count=0;
    while(num!=0)
    {
        count = count + 1;
        num = num/10;
       
    }
     return count;
}