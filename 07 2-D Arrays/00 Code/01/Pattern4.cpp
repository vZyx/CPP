# include<iostream>
using namespace std;
    
/*program for draw another pattern 3 using nested for loop
    *
   **
  ***
 ****
*/
int main(){
	for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
		if(i+j>5-1)
        cout<<"*";
		else
        cout<<" ";
        }
	    cout<<endl;
	}
	return 0;
}