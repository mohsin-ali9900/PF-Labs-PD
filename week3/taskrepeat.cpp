#include <iostream>
using namespace std;
main(){
string name;
float matric_marks=0;
float intermediate_marks=0;
float ecat_marks=0;
float aggregate=0;
float matric_per=0;
float intermediate_per=0;
float ecat_per=0;
float matric_weight=0;
float intermediate_weight=0;
float ecat_weight=0;

matric_per = matric_marks*100/1100;
intermediate_per = intermediate_marks*100/550;
ecat_per = ecat_marks*100/400;

matric_weight = matric_per*10/100;
intermediate_weight = intermediate_per*40/100;
ecat_weight = ecat_per*50/100;

cout<<"Enter your name:";
cin>>name;
cout<<"Enter your matric marks:";
cin>>matric_marks;
cout<<"Enter your intermediate marks:";
cin>>intermediate_marks;
cout<<"Enter your ecat marks:";
cin>>ecat_marks;
cout<<"matric"<<matric_weight;
cout<<"intermediate"<<intermediate_weight;
cout<<"ecat"<<ecat_weight;


aggregate=matric_weight+intermediate_weight+ecat_weight;
cout<<"Aggregate = "<<aggregate;

}