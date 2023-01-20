#include <iostream>
using namespace std;

void add(int no1,int no2);
void product(int no1,int no2);
void subtract(int no1,int no2);
void devision(int no1,int no2);

main()
{

	int no1;
	int no2;
	char operation;
	cout<<"Enter first number:";
	cin>>no1;
	cout<<"Enter second number:";
	cin>>no2;
	cout<<"Enter the operator(+,-,*):";
	cin>>operation;
	
	if(operation=='+')
	{
	add(no1,no2);
	}
	
	if(operation=='*')
	{
	product(no1,no2);
	}
	
	if(operation=='-')
	{
	subtract(no1,no2);
	}
	
	if(operation=='/')
	{
	devision(no1,no2);
	}
	
}

void subtract(int no1,int no2)
{
	int subtract;
	subtract=no1-no2;
	cout<<"subtraction is :"<<subtract<<endl;
	
}

void product(int no1,int no2)
{
	int product;
	product=no1*no2;
	cout<<"product is :"<<product<<endl;
}

void add(int no1,int no2)
{
	int sum;
	sum=no1+no2;
	cout<<"sum is :"<<sum<<endl; 
}

void devision(int no1,int no2)
{
	int devide;
	devide=no1/no2;
	cout<<"devision result is"<<devide<<endl;

}