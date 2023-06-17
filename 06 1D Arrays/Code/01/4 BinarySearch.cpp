# include<iostream>
using namespace std;
//program for binary search of array element
// must be in a sorted order
int main(){
    int a[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid; // l= low index, h= high index
	cout<<"enter the key: ";
	cin>>key;
    
	while(l<=h){
		mid=(l+h)/2;
		if(key==a[mid]){
			cout<<"found at index: "<<mid;
			return 0;
		}
		else if(key<a[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	cout<<"not found";
	return 0;
}