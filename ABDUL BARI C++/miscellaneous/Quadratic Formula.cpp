#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //declaring variables
  double a ;
  double b ;
  double c ; 
  // assigning a
  cout<<"Enter a: ";
  cin>>a;
  //assigning b
  cout<<"Enter b: ";
  cin>>b;
  //assigning c
  cout<<"Enter c: ";
  cin>>c;
  double root1,root2;
  // The positive root
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  // the negative root
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout<<"Root 1 is >> "<<root1<<"\n";
  std::cout<<"Root 2 is >> "<<root2<<"\n";
  
  
  
}