#include <iostream>
#include <windows.h>
using namespace std;

void printnum(int length);

main()
{
    int length;
    cout<<"Enter the number : ";
    cin>>length;
    
    printnum(length);
}

void printnum(int length)
{
    int next = 0,previous = 0,current = 1;
    cout<<previous<<endl;
    cout<<current<<endl;
    for (int count = 0; count<length-2; count++)
    {
    
        next = previous + current;
      
        previous=current;
        current=next;
          cout<<next<<endl;
    }
}