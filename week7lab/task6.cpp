#include <iostream>
#include <windows.h>
using namespace std;

int checklcm(int,int,int);
int checkhcf(int,int);

main()
{
    int num1,num2;
    cout<<"Enter the number1 : ";
    cin>>num1;
    cout<<"Enter the number2 : ";
    cin>>num2;

    int result;
    result=checkhcf(num1,num2);
    cout<<" HCF =  "<<result<<endl;

    int LCM = checklcm(num1,num2,result);
    cout<<" LCM = "<<LCM;
    
}

int checkhcf(int num1, int num2)
{
    int gcd;

    for(int count = 1; count<=num1; count = count + 1)
    {
        if(num1 % count == 0 && num2 % count == 0)
        {
        
            gcd = count;
      
        }
    }
    return gcd;
}

int checklcm(int num1,int num2,int result)
{
    int result3;
    result3 = (num1 * num2) / result;
    return result3;
}