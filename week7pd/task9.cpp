#include<iostream>
using namespace std;

void triangels(int num);

main()
{
    int num;
    cout<<"Enter number of rows : ";
    cin>>num;
    triangels(num);
    
} 
void triangels(int num)
{
    int flow=num*2-2;
    for(int i=1; i<=num;i++)
    {
       for(int j=1;j<=i;j++)
       {
       cout<<'*';
       }
       for(int k=1;k<=flow;k++)
       {
       cout<<" ";
       }
       for(int j=1;j<=i;j++)
       {
        cout<<'*';
       }
       cout<<endl;
       flow=flow-2;    
    }
     

}     