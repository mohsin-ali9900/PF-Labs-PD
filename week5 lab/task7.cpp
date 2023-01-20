#include<iostream>
using namespace std;
int filled(float total_volume_filled,float volume,float P1_fil,float P2_fill);
int notFilled(float total_volume_filled,float volume,float time);
main()
{
float volume;
float P1_flow;
float P2_flow;
float time;
float filled_percentage,P1_fill_percentage,P2_fill_percentage;
cout<<"Enter the volumr of pool:";	
cin>>volume;
cout<<"Enter flow rate through first pipe:";
cin>>P1_flow;
cout<<"Enter flow rate through second pipe:";
cin>>P2_flow;
cout<<"Enter number of hours that worker was absent:";
cin>>time;
float P1_fill=P1_flow*time;
float P2_fill=P2_flow*time;
float total_volume_filled=P1_fill+P2_fill;
if(total_volume_filled<volume)
	{
         filled(total_volume_filled,volume,P1_fill,P2_fill);
	}
if(total_volume_filled>volume)
	{
          notFilled(total_volume_filled,volume,time);
	}
}

int filled(float total_volume_filled,float volume,float P1_fill,float P2_fill)
{
  float filled_percentage=total_volume_filled*100/volume;
  cout<<"The pool is filled:"<<filled_percentage<<endl;
  float P1_fill_percentage=P1_fill*100/volume;   	
  cout<<"The P1 fill is:"<<P1_fill_percentage<<endl;
  float P2_fill_percentage=P2_fill*100/volume;    
  cout<<"The P2 fill is:"<<P2_fill_percentage<<endl;	
}
int notFilled(float total_volume_filled,float volume,float time)
{
  float overflow=total_volume_filled-volume;
  cout<<"Litre of overflow is:"<<overflow<<endl;
  float time_overflow=overflow/time;
  cout<<"Overflow time is:"<<time_overflow;
}