#include <string>
#include <iostream>
using namespace std;

int main(){

    char nickname[10] = {'j', 'o', 'h', 'n', '\0'};

    cout << nickname << endl;

    // char nickname2[10] = {};
    // scanf("%s", nickname2); // for taking one word
    // cout << nickname2 << endl;


    char two_words[10] = {};
    gets(two_words);// taking two words
    cout << two_words << endl;


    string name = "Ziyad";
    cout << name << endl;
    
    int len = name.size(); // 5
    cout << "The length is: " << len << endl;

    name[len - 1] = 'x';
    cout << name[len - 1] << endl; // x

    cout << name << endl;




    return 0;
}