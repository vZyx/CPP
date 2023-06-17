#include<iostream>
using namespace std;
int main(){
    // task 1
    int size =8;
    string names [size]={"Mohamed", "Ali" ,"Khaled" , "Naif", "Fahd", "Yahya", "Ahmad", "Hassan"}; 

    cout<<"Array before rotation:\n"<<endl;
    for(int i=0; i<8; i++){
        cout<<names[i]<<" ";
    }
    cout<<endl;

    // task 2
    string shifted_students[size];
    int newPostionIndex;
    //shifting index 2 to the right
    for(int i=0; i<size; i++){
        newPostionIndex =  i + 2;
        if(newPostionIndex>=size){
            newPostionIndex = newPostionIndex % size;//we use the remainder to ensure the resulting index is within the range
            }
        shifted_students[newPostionIndex] = names[i];
    }

    cout<<"\nArray after rotation:\n"<<endl;
    //prints shifted_students
    for(int i=0; i<size; i++){
        cout<<shifted_students[i]<<" ";
    }
    cout<<endl;
    // task 3
    string new_name;
    cout<<"\nEnter the name to be insert in the rotated array in the index 2: ";
    cin>>new_name;

    for (int i=0; i<9; i++){
			shifted_students[2]="sami";
		}

    cout<<"\nArray after inserting the name and shifting:\n";
        for(int i=0; i<size; i++){
            cout<<shifted_students[i]<<" ";
    }


    return 0;
}