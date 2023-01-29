#include<iostream>
using namespace std;
int percentagecalculate(int num);
main()
{
  int num;
  cout<<"Number of cargo:";
  cin>>num;
  percentagecalculate(num);
}
int percentagecalculate(int num)
{
    float per1=0,per2=0,per3=0;
    float tons;
    float v1=0,v2=0,v3=0;
    float percent1=0,percent2=0,percent3=0;
    float sum=0;
    for(int i=0; i<num; i++)
    {
        cout<<"Enter tonnage:";
        cin>>tons;
        sum=sum+tons;
        int current_number=tons;
        if(tons<=3)
        {
        v1=v1+tons;
        }
        per1=v1*200;
         if(tons>3 && tons<=11)
        {
        v2=v2+tons;
        }
        per2=v2*175;
        if(tons>11)
        {
        v3=v3+tons;
        }
        per3=v3*120;       
    }
   float total_percentage=(per1+per2+per3)/sum;
   cout<<total_percentage<<endl; 
   percent1=v1/sum*100;
   cout<<"per1 is:"<<percent1<<'%'<<endl;
   percent2=v2/sum*100;
   cout<<"per2 is:"<<percent2<<'%'<<endl;
   percent3=v3/sum*100;
   cout<<"per3 is:"<<percent3<<'%'<<endl;
}
