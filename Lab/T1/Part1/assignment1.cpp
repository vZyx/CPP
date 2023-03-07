#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout<<"Enter a numerator: ";
    cin>>numerator;
    cout<<"Enter a denominator: ";
    cin>>denominator;

    if (numerator < denominator) {
        cout<<numerator<< " / " <<denominator<<" is a proper fraction"<<endl;// proper fraction
    }
    else if (numerator % denominator == 0) {
        cout<<numerator<< " / " <<denominator<<" is an improper fraction"<<endl;// improper fraction
        cout<<"and it can be reduced to "<< numerator / denominator<<endl;
    }   
    else {
        cout<<numerator<< " / " <<denominator<<" is an improper fraction"<<endl;// improper fraction
        cout<<"and its mixed fraction is "
        << numerator / denominator<<" + "<<numerator % denominator<<" / "<< denominator <<endl;
    }
    return 0;
}
