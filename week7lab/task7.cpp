#include <iostream>
#include <windows.h>
using namespace std;

void printPercentage(int);

main()
{
    int number;
    cout <<"Enter a number (1 - 1000) : ";
    cin>>number;
    if(number >0)
    {
    printPercentage(number);
    }
}

void printPercentage(int number)
{
        int x;
        float p1 = 0,p2 = 0,p3 = 0,p4 = 0,p5 = 0;

    for(int count = 1; count <= number; count++)
    {
        cout<<"Enter a number : ";
        cin>>x;

        
    
   
        if(x>=1 && x<200)
        {
            p1 = p1 + 1;
            
        }
        else if(x>=200 && x<=399)
        {
            p2 = p2 +1;

        }
        else if(x>=400 && x<=599)
        {
            p3 = p3 + 1;

        }
        else if(x>=600 && x<=799)
        {
            p4 = p4 + 1;
            
        }
        else if(x>=800 && x<=1000)
        {
            p5 = p5 + 1;
           
        }
    }
        
        float per1,per2,per3,per4,per5;

        per1 = (p1*100)/number;
        per2 = (p2*100)/number;
        per3 = (p3*100)/number;
        per4 = (p4*100)/number;
        per5 = (p5*100)/number;

       
    
     cout<<per1<<"  "<<per2<<"  "<<per3<<"  "<<per4<<"  "<<per5<<"  ";
}

