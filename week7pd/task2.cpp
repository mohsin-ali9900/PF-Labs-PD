#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void nested(int);

main()
{
    int rows;
    cout<<"Enetr no of rows : ";
    cin>>rows;

    nested(rows);
}

void nested(int rows)
{
    int r=rows;
    for(int i=1; i<=rows; i++)
    {
        for(int z = r; z>0; z=z-1)
        {
            cout<<"*";
        }
        
        cout<<endl;
        r=r-1;
    }
    
}