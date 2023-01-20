#include <iostream>
using namespace std;

void ifequal(int,int);

main()
{
	int no1,no2;
	cout<<"Enter first number:";
	cin>>no1;
	cout<<"Enter second number:";
	cin>>no2;
	ifequal(no1,no2);
}


void ifequal(int no1,int no2)
{
	if(no1==no2)
	{
	  cout<<"True";
	}
	if(no1!=no2)
	{  
	  cout<<"False";
	}
}
