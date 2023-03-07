#include <iostream>
#include <fstream>
using namespace std;

    void addCity(){
    string name;
    int zipcode, choice;
    ofstream write("cities.txt",ios::app);
    
    if (!write.is_open()){
    cout<<"\nError: Unable to open the file!";
    return;
    }//end if

    do {
    cout<<"\nEnter the zip code for the city: ";
    cin>> zipcode;
    write<< zipcode <<" ";
    cin.ignore(); //ignore the new line entered since there is a getline after this

    cout<<"Enter the name of the city: ";
    getline(cin,name);
    write<< name <<endl;
    cout<<"Would you like to add another city? (-1 to quit) ";
    cin>>choice;

    } while( choice != -1 );
    write.close();
    }//end of addCity

    void searchCity(){

    ifstream read("cities.txt");
    int zipcode,zip;
    string city;
    if ( !read.is_open() ) {
    cout<<"\nError: Unable to open the file!";
    return;
    }//end if

    cout<<"\nEnter the zip code you would like to search for: ";
    cin>>zip;

    while( !read.eof() ){
    read>>zipcode;
    getline(read,city);
    if ( zipcode==zip ){
    cout<<"The city is "<< city <<endl;
    read.close();
    return;
        }//end if
    }//end while

    cout<<"Not found"<<endl;
    read.close();

    } //end of searchCity

    int main(){
    int choice;
    do {
    cout<<"\n----------- Menu -----------"<<"\n1- Add cities to the file\n2- Search for a city\n3- Exit"<<"\n----------------------------\n";
    cin>>choice;
    if( choice ==1 )
    addCity();

    else if( choice == 2 )
    searchCity();

    } while( choice != 3 );

    return 0;
}