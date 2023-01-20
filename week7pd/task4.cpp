#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void amplify(int);

main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    amplify(num);
} 

void amplify(int num)
{

    for(int n = 1; n<=num; n++)
    {
        if(n%4 == 0)
        {
            cout<<n*10<<endl;
        }
        cout<<n<<endl;
    }
}