#include <iostream>
using namespace std;

void checkresult(int marks);

main()
{
	int marks;
	while(true)
	{
	  cout<<"enter your marks:";
	  cin>>marks;
	  checkresult(marks);
	}
	
	
	
}

void checkresult(int marks)
{

	if(marks>50)
	{
		cout<<"congratulations!!!";
	}
	if(marks<50)
	{
		cout<<"fail";
	}
	if(marks==50)
	{
		cout<<"Aap ko mehnat ki zroorat ha";
	}
}