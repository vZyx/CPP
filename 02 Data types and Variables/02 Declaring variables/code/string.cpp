#include <string>
#include <iostream>
using namespace std;

int main(){

    string s = "Ziyad";
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len - 1] << endl;





    return 0;
}