#include <iostream>
#include <windows.h>
using namespace std;



main()
{
    int num;
    cin>>num;
    for(int c=1;c<=10;c++)
    {
        cout<<num<<" * "<<c<<" = "<<num*c<<endl;
    }
}