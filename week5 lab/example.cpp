#include <iostream>
using namespace std;

int add(int number1, int number2);
float devide(float number1, float number2);


main()
{
	int number1,number2;
	float result;
	cout<<"Enter First Number : ";
	cin>>number1;
	cout<<"Enter second Number : ";
	cin>>number2;
	result= add(number1,number2);
	cout<<"Sum is : "<<result<<endl;
	result= devide(number1,number2);
	cout<<"Devision result is : "<<result<<endl;
}

int add(int number1, int number2)
{
	int result;
	result=number1+number2;
	return result;
}

float devide(float number1, float number2)
{
	float result;
	result=number1/number2;
	return result;
}