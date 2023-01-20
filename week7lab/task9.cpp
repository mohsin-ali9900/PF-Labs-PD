#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

float calculatemoney(int,float);

main()
{
    int year;
    float money;
    float result,result2;
    cout << "Enter the year : ";
    cin >> year;
    cout<<"Enter the money : ";
    cin>>money;

    result = calculatemoney(year, money);

    result2 = money - result;

    if (result2>= 0)
    {
        cout<<"Yes! He will live a carefree life and will have "<<result2<<" dollars left.";
    }
    else if(result2< 0)
    {
        result2 = abs (result2);
        cout<<"He will need "<<result2<<" dollars to survive.";
    }
}

float calculatemoney(int year,float money)
{
    float budget;
    int age = 18;
    for(int x=1800; x<=year; x++)
    {
        if(x%2 == 0)
        {
            budget =budget + 12000;
        }

        else if(x%2 != 0)
        {
            budget =budget + 12000 + (50*age);
        }
        
        age++;
    }

    return budget;
    // x++  -> x=x+1
    // x--  -> x=x-1
    // x+=12  -> x=x+12
    // x-=13  -> x=x-13

}
