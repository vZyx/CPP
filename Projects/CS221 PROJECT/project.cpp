
/*
    ***Games System***
    Zeyad hamad alhamdan 2220003041
    Ibrahim alkhudairi 2220001939
    Khalid Alghamdi 2220006956
    Ziyad Alghamdi  2220000631
    Osamh almalki 2220003749
    Malek Alzhrani 2200004837
*/

#include<iostream>
#include<fstream>
using namespace std;  

const int SIZE = 100; //global

struct players
{
    string name;
    int id;
};

    //Function 1 for adding a new item
void AddItem(players x[], int &currentSize)
{
    if (currentSize >= SIZE){
        cout << "Cannot add anymore items!\n";
    }
    else
    {
        cout << "\nEnter the new item's id: ";
        cin >> x[currentSize].id;
        cout << "Enter the new item's name: ";
        cin >> x[currentSize].name;
        currentSize++;
    }
}

    //Function 2 for searching for an item
void SearchItem(players x[], int &currentSize){

    int id_update;
    cout<<"\nEnter the ID of the record you want to search: ";
    cin >> id_update;

    for(int i=0; i < currentSize; i++){
        if(x[i].id == id_update){
            cout<<"ID: "<< x[i].id<<endl;
            cout<<"Name: "<< x[i].name<<endl;
            return;
        }
    }
    cout<<"ID NOT FOUND\n";
}

    //Function 3 for updating an item
void UpdateItem(players x[], int &currentSize)
{

    int id_update;
    cout<<"\n Enter the ID of the record you want to update: ";
    cin >>id_update;

    for(int i=0; i < currentSize; i++)
    {
        if(x[i].id == id_update)
        {
            cout<<"Enter new ID: ";
            cin>>x[i].id;
            cout<<"Enter new name: ";
            cin>>x[i].name;
            return;
        }
    }
    cout<<"ID NOT FOUND\n";
}

    //Function 4 for deleting  an item
void DeleteItem(players x[], int &currentSize)
{
    if(currentSize == 0){
        cout<<"The array is empty!\n";
        return;
    }

    int delete_id;
    cout<<"\nEnter the ID of the record you want to delete: ";
    cin >> delete_id;
    int deleteIndex = -1;
    for (int i = 0; i < currentSize; i++)
    {
        if (x[i].id == delete_id)
        {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex == -1)
    {
        cout<<"ID NOT FOUND\n"; }
    else
    {
        for (int i = deleteIndex; i < currentSize; i++)
        {
        x[i] = x[i+1]; 
        } 
        currentSize--;
    }
}

    //Function 5 for sorting the items
void Sort(players x[], int &currentSize)
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


void Display(players x[], int &currentSize)
{
    cout<<"\n===============================\n";
    for(int i = 0; i < currentSize; i++){
        cout<<"ID: "<<x[i].id<<endl;
        cout<<"NAME: "<<x[i].name<<endl;
        cout<<"\n===============================\n";
    }
}


    // Display all the menu
int Menu()
{
    int option;
    cout << "\nChoose an option: \n";
    cout << "(1) Add new item\n";
    cout << "(2) Search for in item\n";
    cout << "(3) Update existing record\n";
    cout << "(4) Delete item\n";
    cout << "(5) Sort\n";
    cout << "(6) Display\n";
    cout << "(0) Quit Program\n";
    cout << "\nYour Choice is:  ";

    cin>>option;

    return option;
}



void startGame(players x[], int &currentSize)
{

    bool state = true;

    while ( state == true )
    {
        int choice = Menu();
        switch(choice)
        {
            case 0:
                state = false;
                break;
                // wrong option only between 1-6
            case 1:
                AddItem(x, currentSize);
                break;
            case 2:
                SearchItem(x, currentSize);
                break;
            case 3:
                UpdateItem(x, currentSize);
                break;
            case 4:
                DeleteItem(x, currentSize);
                break;
            case 5:
                Sort(x, currentSize);
                break;
            case 6:
                Display(x, currentSize);
                break;

            default:
            cout<<"Only between 1-6 !!\n";
            return;
            
        }
    }
}

    // main function
int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin  >> size;
    players array[SIZE];

    /////////////////////////////////////////////////////////////////

    // *********************** Files ********************************    
    ifstream file("input.txt", ios::in);

    //Error message
    if ( !file ){
        cout<<"\nError: The file 'input.txt' could not be opend!\nQuiting the Game System..."<<endl;
        exit(1);
    }

    // Determines whether the last character in a file has been read
    int i = 0;
    while ( !file.eof() && i < size ){
        file >> array[i].id >> array[i].name;
        i++;
    }

    file.close();

    startGame(array, size);// Displaying the Menu

    ofstream MyFile("input.txt", ios::out);// out

    //adding id and name in file
    for(int j = 0; i < size; j++){
        MyFile << array[j].id<< " " << array[j].name<< "\n";
    }

    cout<<"\n           Thanks  for using the Game System!\n";
    cout<<"         Your updated records have been written to the file\n";
    cout<<"         ******Quitting******\n";

    MyFile.close();// closes input.txt file

    return 0;
}




