#include<iostream>
#include<windows.h>
#include<cmath>
void digitNum(int);
using namespace std;
main()
{ 
    int num;
    cout<<"enter a number between 1 and 99(Except 11-19)";
    cin>>num;
    digitNum(num);
}
void digitNum(int num)
{
  if(num/10==2)
  {
    cout<<"twenty ";
  }
  if(num/10==3)
  {
    cout<<"thirty ";
  }
  if(num/10==4)
  {
    cout<<"forty ";
  }
  if(num/10==5)
  {
    cout<<"fifty ";
  }
  if(num/10==6)
  {
    cout<<"sixty ";
  }
  if(num/10==7)
  {
    cout<<"seventy ";
  }
  if(num/10==8)
  {
    cout<<"eighty ";
  }
  if(num/10==9)
  {
    cout<<"ninty ";
  }
  if(num%10==2)
  {
    cout<<"two";
  }   
  if(num%10==3)
  {
    cout<<"three";
  }
  if(num%10==4)
  {
    cout<<"four";
  }
  if(num%10==5)
  {
    cout<<"five";
  }
  if(num%10==6)
  {
    cout<<"six";
  }
  if(num%10==7)
  {
    cout<<"seven";
  }
  if(num%10==8)
  {
    cout<<"eight";
  }
  if(num%10==9)
  {
    cout<<"nine";
  }




}