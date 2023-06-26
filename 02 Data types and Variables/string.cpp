#include <string>
#include <iostream>
using namespace std;

int main(){

    string s = "Ziyad";
    cout << s << endl;
    
    int len = s.size(); // 5
    cout << len << endl;

    s[len - 1] = 'x';
    cout << s[len - 1] << endl;

    cout << s << endl;





    return 0;
}