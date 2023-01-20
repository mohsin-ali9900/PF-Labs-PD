#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

float calculatemoney(int,float,float);

main()
{
    int age;
    float wprice,tprice,total;
    cout << "Enter the lilly's age (1 - 77) : ";
    cin >> age;
    cout<<"Enter the washing machine price (1.00 - 10000.00) : ";
    cin>>wprice;
    cout<<"Enter the price of each toy (0 - 40) : ";
    cin>>tprice;

    total = calculatemoney(age,wprice,tprice);
    if (total>=0)
    {
        cout<<"YES! "<<total;
    }
    else if(total<0)
    {
        total = abs(total);
        cout<<"NO! "<<total;
    }

}

float calculatemoney(int age,float wprice,float tprice)
{
    float cash = 10,total,budget = 0;

    for(int x=1; x<=age; x++)
    {
        if(x%2 == 0)
        {
            budget += cash;
            budget -= 1;
            cash = cash + 10.00;
        }

        else if(x%2 != 0)
        {
            cout<<tprice<<endl;
            budget += tprice;
        }
    }
    total = budget - wprice;
    return total;
}