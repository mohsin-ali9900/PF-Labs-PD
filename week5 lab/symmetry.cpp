#include <iostream>
#include <windows.h>
using namespace std;

void symmetry(int);


main()
{
  int number;
  cout<<"Enter the number three digit number (like:- 123) : ";
  cin>>number;
  symmetry(number);
  
}


void symmetry(int number)
{
	int result1,result2;

	result1=number%10;                               
	result2=number/100;

	if(result1==result2)
	{
	   cout<<"Number is Symmterical(TRUE)";
	}

	if(result1!=result2)
	{
	   cout<<"Number is NOT Symmetrical(FALSE)";
	}
   
}