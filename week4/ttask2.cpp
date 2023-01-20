#include <iostream>
using namespace std;

void iseligible(int age);

main()
{
	int age;
	while(true)
	{
	  cout<<"Enter Your Age";
	  cin>>age;
	  iseligible(age);
	}
	
}

void iseligible(int age)
{
	
	if (age>18)
	{
	  cout<<"eligible to vote"<<endl;
	}
	if (age==18)
	{
	  cout<<"eligible to vote"<<endl;
	}

	if (age<18)
	{
	  cout<<"NOT eligible to vote"<<endl;
	}
}