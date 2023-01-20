#include <iostream>
#include <windows.h>
using namespace std;

void oddeven(int);

main()
{
   int number;
   cout<<"Enter the number a five digit number (like:- 12345) : ";
   cin>>number;

   oddeven(number);
}

void oddeven(int number)
{
	int result;
	int result1,result2,result3,result4,result5;
	int div1,div2,div3,div4;
	
	result1 = number%10;
	div1 = number/10;
	result2 = div1%10;
	div2 = div1/10;
	result3 = div2%10;
	div3 = div2/10;
	result4 = div3%10;
	div4 = div3/10;
	result5 = div4%10;

	result= result1+result2+result3+result4+result5;
	
	if(result%2==0)
	{
	   cout<<"Evenish!";
	}
	
	if(result%2!=0)	
	{
	   cout<<"Oddish!";
	}
}