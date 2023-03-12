#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    cout << "   Even Numbers" << endl;
    vector<int> even_numbers{2, 4, 6, 7};
    // initial vector
    cout << "Initial Vector: ";
    for (int i : even_numbers) {
    cout << i << " ";
    }

    // remove the last element
    even_numbers.pop_back();   
    // final vector
    cout << "\nUpdated Vector: ";
    for (int i : even_numbers) {
        cout << i << " ";
    }

    return 0;
}