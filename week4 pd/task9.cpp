#include <iostream>
using namespace std;

void ifequal(string);

main()
{
	string word;
	cout<<"Enter TRUE/FALSE:";
	cin>>word;
	ifequal(word);
}


void ifequal(string word)
{
	if(word=="true")
	{
	  cout<<"False";
	}
	if(word=="false")
	{  
	  cout<<"True";
	}
}
