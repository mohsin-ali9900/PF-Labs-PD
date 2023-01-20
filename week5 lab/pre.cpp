#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int num1,num2,result;
	float resultt;
	cout<<"Enter number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	result = max(num1,num2);
	cout<<"Maximum number is : "<<result<<endl; 

	result = min(num1,num2);
	cout<<"Minimum number is : "<<result<<endl;
	
	resultt = min(3.2,4.3);
	cout<<"Minimum number is : "<<resultt<<endl;
	
	resultt=sqrt(num2);
	cout<<"Square Root of number is : "<<resultt<<endl;

	resultt=cbrt(num1);
	cout<<"cube Root of number is : "<<resultt<<endl;

	resultt=pow(num2,num1);
	cout<<"power of number is : "<<resultt<<endl;

	resultt=ceil(3.4);
	cout<<"ceil of number is : "<<resultt<<endl;

	resultt=floor(4.9);
	cout<<"floor of number is : "<<resultt<<endl;
}






