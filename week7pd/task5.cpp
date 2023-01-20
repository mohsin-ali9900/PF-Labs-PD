#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int triangle(int);

main()
{
    int rows,result;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    result = triangle(rows);
    cout<<result;


}

int triangle(int rows)
{
    int result = 0;
    for(int i = 0; i <= rows; i++)
    {
        result = result + i;
    }

    return result;
}