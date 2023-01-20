#include <iostream>
#include <windows.h>
using namespace std;

void playtime(int);

main()
{
	int holidays;
	cout<<"Enter no of holidays: ";
	cin>>holidays;
	
	
	
	playtime(holidays);
	

}

void playtime(int holidays)
{
	int workingdays;
	int gametime;
	int diffrence;
	workingdays=365-holidays;
	gametime=(workingdays*63+holidays*127);
	diffrence=30000-gametime;
	if(diffrence>0)
	{
	  cout<<"Tom will sleep well.."<<endl;
	  cout<<diffrence<<"  minutes  less for play.."<<endl;
	}

	if(diffrence<0)
	{
	  cout<<"Tom will run away.."<<endl;
	  cout<<diffrence<<"  minutes for play.."<<endl;
	}

}