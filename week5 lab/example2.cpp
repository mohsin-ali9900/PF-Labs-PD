#include <iostream>
using namespace std;

int issmaller(int, int);


main()
{
	int number1,number2,result;
	cout<<"Enter First Number : ";
	cin>>number1;
	cout<<"Enter Second Number : ";
	cin>>number2;
	result= issmaller(number1,number2);
	cout<<result<<" is smaller number.";	
}

int issmaller(int number1, int number2)
{
	if(number1<number2)
	{
	  return number1;
	}	
	return number2;
}

