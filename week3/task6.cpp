#include <iostream>
using namespace std;
main(){
string name;
float matric_marks;
float intermediate_marks;
float ecat_marks;
float aggregate;
float matric_per;
float intermediate_per;
float ecat_per;
float matric_weight;
float intermediate_weight;
float ecat_weight;

cout<<"Enter your name:";
cin>>name;
cout<<"Enter your matric marks:";
cin>>matric_marks;
cout<<"Enter your intermediate marks:";
cin>>intermediate_marks;
cout<<"Enter your ecat marks:";
cin>>ecat_marks;

matric_per=matric_marks*100/1100;
intermediate_per=intermediate_marks*100/550;
ecat_per=ecat_marks*100/400;

matric_weight=matric_per*0.1;
intermediate_weight=intermediate_per*0.4;
ecat_weight=ecat_per*0.5;



aggregate=matric_weight+intermediate_weight+ecat_weight;
cout<<"Aggregate = "<<aggregate;

}