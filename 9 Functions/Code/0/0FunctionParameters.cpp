#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses.
You can add as many parameters as you want, just separate them with a comma.
*/

void myFunction(string fname, int age) {
  cout <<"The name is: " << fname << ".\t And my age is " << age << endl;
}

// main function
int main() {
  int n1,n2;
  max(n1,n2);
  myFunction("Liam" , 17);
  myFunction("Jenny", 19);
  myFunction("Anja", 20);

  return 0;
}

/*
When a parameter is passed to the function, it is called an argument.
So, from the example above: fname and age are parameters, while Liam, Jenny and Anja, and the ages are arguments.
*/
