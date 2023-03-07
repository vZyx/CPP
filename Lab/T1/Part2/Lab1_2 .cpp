#include<iostream>
using namespace std;

//Find and print the largest mark.
int main(){
    int stuMarks[50][2];
    int sum=0;
    for (int i=0; i<50; i++){
        cout << "\nStudent#"<< (i+1) <<" ID:”;
        cin >> stuMarks [i][0];
        cout << "\nStudent#" << (i+1) <<" Mark:”;
        cin >> stuMarks [i][1];
    }

    int max = 0;
    for (int i=0; i<50; i++){
        sum+= stuMarks [i][1];
        if (stuMarks[i][1] > max )
        max = stuMarks [i][1];
    }

    cout<<"\n Average = "<<sum/50;
    cout<<"\n Largest mark= "<<max;

return 0;
}