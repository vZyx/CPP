#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    // Use the rand() function
    int randomNumber;
    randomNumber = rand();//returns an intger that is greater than or equal to 0 but less than or equal to the value stored in RAND_MAX
    cout<<randomNumber<<endl;
    /////////////////////////////////////////////////

    // Generate random value within a specfic range     
    //lower_bound + rand() % (upper_bound - lower_bound + 1)
    cout<< 1  + rand() % ( 6  -  1  + 1)
    



// random number generator
    // cout<<RAND_MAX;
    // srand(time(0));
    // int num;
    // for(int j=0; j<5; j++){

    //     num = rand();
    //     cout<<endl<<"generated "<<num<<endl;

    // }



    return 0;
}