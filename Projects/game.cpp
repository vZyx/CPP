/*
    **Games System**
    Ziyad Saeed Alghamdi 2220000631
*/

#include<iostream>
#include<fstream>
using namespace std;  

const int SIZE = 100;

struct players
{
    string name;
    int id;
};

int Menu()
{
    int option;
    std::cout << "\nChoose an option: \n";
    std::cout << "1) Add new item\n";
    std::cout << "2) Search for in item\n";
    std::cout << "3) Update existing record\n";
    std::cout << "4) Delete item\n";
    std::cout << "5) Sort\n";
    std::cout << "6) Display\n";
    std::cout << "0) Quit \n";
    std::cout << "\nYour Choice ===> ";

    cin>>option;

    return option;
}

    //Choice 1
void addItem(players x[], int &currentSize)
{
    if (currentSize >= SIZE){
        std::cout << "Cannot add anymore items!\n";
    }
    else
    {
        std::cout << "\nEnter the new item's id: ";
        cin >> x[currentSize].id;
        std::cout << "Enter the new item's name: ";
        cin >> x[currentSize].name;
        currentSize++;
    }
}

    //Choice 2
    void searchItem(players x[], int &currentSize){

        int query;
        std::cout<<"\n Enter the ID of the record you want to search: ";
        cin >>query;

    for(int i=0; i < currentSize; i++){
        if(x[i].id == query){
            std::cout<<"ID: "<< x[i].id<<endl;
            std::cout<<"Name: "<< x[i].name<<endl;
            return;
        }
    }
    std::cout<<"The entered ID was not found in the records\n";
}

    //Choice 3
void updateItem(players x[], int &currentSize)
{

    int id_update;
    std::cout<<"\n Enter the ID of the record you want to update: ";
    cin >>id_update;

    for(int i=0; i < currentSize; i++)
    {
        if(x[i].id == id_update)
        {
            std::cout<<"Enter new ID: ";
            cin>>x[i].id;
            std::cout<<"Enter new name: ";
            cin>>x[i].name;
            return;
        }
    }
    std::cout<<"The entered ID was not found in the records\n";
}

    //Choice 4
void deleteItem(players x[], int &currentSize)
{
    if(currentSize == 0){
        std::cout<<"The array is empty!\n";
        return;
    }

    int query;
    std::cout<<"\nEnter the ID of the record you want to delete: ";
    cin >>query;
    int deleteIndex = -1;
    for (int i = 0; i < currentSize; i++)
    {
        if (x[i].id == query)
        {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1)
    {
        cout<<"The entered ID was not found in the records\n"; }
    else
    {
        for (int i = deleteIndex; i < currentSize; i++)
        {
        x[i] = x[i+1]; 
        } 
        currentSize--;
    }
}

    //Choice 5
void sort(players x[], int &currentSize)
{
    int minPos;
    for(int i=0; i<currentSize; i++){
        minPos = i;
        for (int j= i + 1; j < currentSize; j++){
            if(x[j].id < x[minPos].id)
            minPos = j;
            players temp = x[i];
            x[i] = temp;
        }
    }
}

    //Choice 6
void display(players x[], int &currentSize)
{
    cout<<"\n===============================\n";
    for(int i = 0; i < currentSize; i++){
        cout<<"ID: "<<x[i].id<<endl;
        cout<<"NAME: "<<x[i].name<<endl;
        cout<<"\n===============================\n";
    }
}

void startSystem(players x[], int &currentSize)
{

    bool state = true;

    while (state == true)
    {
        int choice = Menu();
        switch(choice)
        {
            case 0:
                state = false;
                break;
            case 1:
                addItem(x, currentSize);
                break;
            case 2:
                searchItem(x, currentSize);
                break;
            case 3:
                updateItem(x, currentSize);
                break;
            case 4:
                deleteItem(x, currentSize);
                break;
            case 5:
                sort(x, currentSize);
                break;
            case 6:
                display(x, currentSize);
                break;

            default:
            cout<<"Invalid choice!!\n";
        }
    }
}

// main function
int main(){
    int size;
    cout << "Enter size of the array: ";
    cin  >> size;
    players array[SIZE];

    ifstream f("data.txt", ios::in);

    if (!f){
        cout<<"\nError: The file 'data.txt' could not be opend!\nQuitting the game  system. . ." << endl;
        
        exit(1);
    }
    
    int i = 0;
        //not and
    while ( !f.eof() && i< size ){
        f >> array[i].id >> array[i].name;
        i++;
    }
    f.close();

    startSystem(array,size);

    ofstream f1("data.txt", ios::out); // write to file


    for(int j = 0; i < size; j++)
    {
        f1 << array[j].id<< " " << array[j].name<< "\n";
    }

    cout<<"\n       Thanks for using the Game System!\n";
    cout<<"         Your updated records have been written to the file\n";
    cout<<"             \n******Closing******\n";

    f1.close();

    return 0;
}




