# include<iostream>
using namespace std;
    
/*program for linear search of array element

*/
int main(){
 	int a[10],n=10;
	cout<<"Enter numbers: ";
    // taking 10 numbers
	for(int i=0; i<n; i++){
		cin>>a[i];
	}


	int key;
	cout<<"Enter key: ";
	cin>>key;
	for(int i=0; i<n; i++){
		if(key==a[i]){
			cout<<"found at index: "<<i;
			return 0;
		}

	}
    cout<<"No key found";	
	return 0;
}		