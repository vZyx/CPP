#include<iostream>
using namespace std;

int main(){
	double RoomWidth,RoomLength,RoomArea;
	cout<<"What's the Width?"<<endl;
	cin>>RoomWidth;
	cout<<"What's the Length?"<<endl;
	cin>>RoomLength;

	cout<<"The Area is: "<<(RoomArea= RoomWidth*RoomLength)<<endl;

	return 0;
}
