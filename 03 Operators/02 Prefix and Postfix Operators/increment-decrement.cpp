/* In programming, the increment operator ++ increases the value of a variable by 1.
                  Similarly, the decrement operator -- decreases the value of a variable by 1.        
prefix:
If you use the ++ operator as a prefix like: ++var,
the value of var (is incremented by 1; then it returns the value).

postfix:
If you use the ++ operator as a postfix like: var++,
the original value of var (is returned first; then var is incremented by 1). 
                                                      */
#include <iostream>
using namespace std;

int main() {
   int var1 = 5, var2 = 5;
   // 5 is displayed
   // Then, var1 is increased to 6.
   cout <<"This is post-increment: "<< var1++ << endl;

   // var2 is increased to 6
   // Then, it is displayed.
   cout <<"This is pre-increment: "<< ++var2 << endl;
   return 0;
}