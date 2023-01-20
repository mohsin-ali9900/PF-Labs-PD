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
    for(int i=1;i<=rows;i++)
    {
        for(int z=1;z<=i;z++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}