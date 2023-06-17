#include<iostream>
#include <fstream>
using namespace std;

    main(){

    ifstream inFile; //creates input file object named inFile
    ofstream outFile,appFile; // creates 2 output file objects

    inFile.open("payrollin.txt",ios::in);
    outFile.open("payrollout.txt",ios::out);
    appFile.open("payrollapp.txt",ios::app);

    if(inFile.is_open() == true && outFile.is_open()== true && appFile.is_open() == true ){
    string name;
	while( !inFile.eof() ){ // To read data from file we will start sequentially from the beginning to the end of file 
		getline(inFile,name); // read to variable name
        cout << name <<endl;
        outFile<<name; // write to first output file
       	appFile<<name; // write to second output file
		}

    inFile.close(); outFile.close(); appFile.close();
    cout << "Copied Successfully" <<endl;}
    else
    cout << "Failed  !" <<endl;
    }


/* Noor
Fadi
Ahmad
khalid
Hadi
*/
