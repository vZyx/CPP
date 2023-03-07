
    #include <cmath>
    #include <iostream>
    #include <fstream>
    using namespace std;

    int main() {

    ofstream write; // output file

    write.open("numbers.txt", ios::out); //creates & open the output file

    if ( write.is_open() ){
    for (int x = 10; x < 26; x++)
    write << x << '#' << pow(x, 2) << endl; // write in the output file
    write.close();
    }
    else{
    cout << "The file could not be opened!" << endl;
    }
    return 0;
}
