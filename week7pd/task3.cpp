#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void nested(int);
void nest(int);

main()
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;

    nested(rows);
    nest(rows);
}

void nested(int rows)
{
    for (int n = 1; n <= rows; n++)
    {
        int space = rows - n;
        for (int a = space; a >= 0; a--)
        {
            cout << " ";
        }
        int steric = n;
        for (int b = 0; b < steric; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nest(int rows)
{
    for (int n = 1; n <= rows; n++)
    {
        int space = n;
        for (int c = 0; c <= space; c++)
        {
            cout<< " ";
        }
        int steric = rows - n;
        for (int d= steric; d>0; d--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}