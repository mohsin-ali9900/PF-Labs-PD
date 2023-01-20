#include <iostream>
#include <cmath>

float positive(float,float,float);
float negative(float,float,float);

using namespace std;

main()
{
  float a,b,c,posresult,negresult;
  cout<<"Enter value of a : ";
  cin>>a;
  cout<<"Enter value of b : ";
  cin>>b;
  cout<<"Enter value of c : ";
  cin>>c;
  posresult=positive(a,b,c);
  cout<<"Positive answer is : "<<posresult<<endl;

  negresult=negative(a,b,c);
  cout<<"negative answer is : "<<negresult;
}

float positive(float a,float b,float c)
{
  float bsquare,fourac,squarert,twoa,positiveans;
  bsquare=pow(b,2);
  fourac=(4)*(a)*(c);
  squarert=sqrt(bsquare-fourac);
  twoa=2*a;
  positiveans=(-b+squarert)/twoa;
  return positiveans;
}

float negative(float a,float b,float c)
{
  float bsquare,fourac,squarert,twoa,negativeans;
  bsquare=pow(b,2);
  fourac=(4)*(a)*(c);
  squarert=sqrt(bsquare-fourac);
  twoa=2*a;
  negativeans=(-b-squarert)/twoa;
  return negativeans;
}