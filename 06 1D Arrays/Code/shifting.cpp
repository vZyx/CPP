#include<iostream>
using namespace std;

// omar mona layla saad rana
// shift 3 to the right
// layla saad rana omar mona
int main(){

    const int size = 5;
    cout<<"Normal Names: ";
    string students[size] = { "Omar", "Mona","Layla","Saad", "Rana" };

    // prints Normal Names
    for(int i=0; i<size ; i++){
        cout << students[i]<<" ";
    }

    /////////////////////////////////////////////

    // shifted_students
    cout<<"\n\nShifted Names: ";

    string shifted_students[size];
    int newPostionIndex;

    //shifting index 3 to the right
    for(int i=0; i<size ; i++){
        newPostionIndex =  i + 3;// 3 to the right
        if(newPostionIndex>=size){
            newPostionIndex=newPostionIndex % size;//we use the remainder to ensure the resulting index is within the range from  0 to  (size-1)
            }
        shifted_students[newPostionIndex] = students[i];
    }
    //prints shifted_students
    for(int i=0; i<size; i++){
        cout<<shifted_students[i]<<" ";
    }

    cout<<endl;


    return 0;
}