#include <iostream>
using namespace std;

void add(int no1,int no2);
void product(int no1,int no2);


main()
{

	int no1;
	int no2;
	cin>>no1;
	cin>>no2;
	add(no1,no2);
	product(no1,no2);
}

void product(int no1,int no2)
{
	int product;
	product=no1*no2;
	cout<<"product is :"<<product;
}

void add(int no1,int no2)
{
	int sum;
	sum=no1+no2;
	cout<<"sum is :"<<sum; 
}














void add()
{

	int no1;
	int no2;
	int sum;
	cout<<"Enter number1:";
	cin>>no1;
	cout<<"Enter number2:";
	cin>>no2;
	sum=no1+no2;
	cout<<"Sum is "<<sum<<endl;

}

void product()
{
	int no3;
	int no4;
	int product;
	cout<<"Enter number3:";
	cin>>no3;
	cout<<"Enter number4:";
	cin>>no4;
	product=no3*no4;
	cout<<"product is "<<product<<endl;
	
}