#include <iostream>
#include <windows.h>
using namespace std;

void time(int,int);

main()
{
   
   int hours,minutes;
  
   cout<<"Enter number of hours : ";
   cin>>hours;
   cout<<"Enter number of minutes : ";
   cin>>minutes;
   
   time(hours,minutes);
}  
   
void time(int hours, int minutes )
{   
	int hourmin,add,hourresult,minutesresult;
	
	hourmin = hours*60;
	
	add = hourmin+minutes+15;
	hourresult = add/60;
	if(hourresult>23)
	{
	  hourresult=hourresult-24;

	}
	  cout<<"Required hours are : "<<hourresult<<endl;
	  minutesresult = add%60;
	  cout<<"Required minutes are : "<<minutesresult<<endl;
}