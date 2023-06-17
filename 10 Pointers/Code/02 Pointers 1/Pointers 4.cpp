#include<iostream>
using namespace std;
int main(){

/*
    **  Null Pointers
    Null value = a special value that means something has no value.
    when a pointer is holding a null value,
    that pointer is not pointing at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an adress is
    was successfully assigned to a pointer

    When using pointers, be careful that your code isn't
    derefreferencing nullptr or pointing to a free memory
    this will cause undefined behavior
*/

    int* pointer = nullptr;
    int x = 123;

    pointer = &x;
    
    if (pointer == nullptr){
        cout<< " Address was not assigned :(";
    }
    else{
        cout<< " Address was successfully assigned"<<"\n";
        cout<< *pointer;
    }


    return 0;
}