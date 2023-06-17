#include <fstream>
#include <iostream>
using namespace std;

    int main(){
    float sum=0, avg, mark;
    int count=0;
    //Open file streams for reading & writing
    ifstream fin("Scores.txt"); // declares fin to be an input file stream variable
    ofstream fout("Average.txt");// declares fout to be an output file stream variable
    
    //check if files were opened successfully
    if ( !fin.is_open() || !fout.is_open()){ // binary
    cout<<"\nError: Unable to open file(s)!";
    return -1;
    }//end if

    //Reads the marks from the input file
    while ( !fin.eof() ){
    fin>>mark;
    fin.ignore(1);
    sum+=mark;
    count++;
    cout << "\nMark"<<count<<" = "<<mark;
    } //end for

    avg= sum/count;

    //Write the average to the output file
    cout<<"\nThe average for "<<count<<" marks is "<<avg;
    fout<<"\nThe average for "<<count<<" marks is "<<avg;
    
    // Close the files
    fin.close(); fout.close();
return 0;
}//end