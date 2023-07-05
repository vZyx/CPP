#include <bits/stdc++.h>
using namespace std;

class Array
{

private:
    int size;
    int length;
    int* items;

public :
    Array(int arrsize)
    {
        size = arrsize;
        length = 0;
        items = new int[arrsize];
    }
    void Fill()
    {
        int no_of_items;
        cout << "How many items you wanna fill? ";
        cin >> no_of_items;
        if (no_of_items > size)
        {
            cout << "You cannot exceed the array size ";
            return;
        }
        else
        {
            for (int i = 0; i < no_of_items; i++)
            {
                cout << "Enter item no " << i << ": ";
                cin >> items[i];
                length++;
            }
        }
    }

    void Display()
    {
        cout << "Display Array content \n";
        for (int i = 0; i < length; i++)
        {
            cout << items[i] << "\t";
        }
        cout << endl;
    }

    int getSize()
    {
        return size;
    }

    int getLength()
    {
        return length;
    }

    int Search(int key)
    {
        int index = -1; // not found
        for (int i = 0; i < length; i++)
        {
            if (items[i] == key)
            {
                index = i;
                break;
            }
        }
    return index;// not found
    }

    void Append(int newitem)
    {
        if (length < size)
        {
            items[length] = newitem; // length is the last element in the array
            length++;
        }
        else
            cout << "Array is full \n";
    }
    
    void Insert(int index, int newitem)
{
    // Check if the index is within the range of the array and if the array is not already full
    if ( (index >= 0) && (index < size) && (length < size) )
    {
        // Shift all elements after the index to the right by one position
        for (int i = length; i > index; i--)
        {
            items[i] = items[i - 1]; // i is the length so it's the last space after the length.
        //  i is the last space and i-1 is the element before it
        }
        
        // Insert the new item at the specified index
        items[index] = newitem;
        // Increase the length of the array
        length++;
    }
    else
    {
        // Display an error message if the index is out of range or the array is already full
        cout << "Error: Index out of range or array is already full\n";
    }
}


int Delete(int index) {
    // Check if the index is within the bounds of the array
    assert(index >= 0 && index < size);

    // Save the value of the element to be deleted
    int deleted = items[index];

    // Shift all elements after the index to the left by one position
    for (int i = index; i < size - 1; ++i) {
        items[i] = items[i + 1];
    }
    // Decrement the length of the array to indicate that one element has been deleted
    length--;

    // Return the value of the deleted element
    return deleted;
}

void Enlarge(int newsize)
{

    if (newsize <= size)
    {
        cout << "New size must be larger than current size \n";
        return;
    }
    else
    {
        size = newsize;
        int* old = items;
        items = new int[newsize];
        for (int i = 0; i < length; i++)
        {
            items[i] = old[i];
        }
        delete[ ]old;
    }
}

    void Merge(Array other)
    {
        int newsize = size + other.getSize();
        size = newsize;
        int* old = items;
        items = new int[newsize];
        int i;
        for ( i = 0; i < length; i++)
        {
            items[i] = old[i];
        }
        delete[]old;
        int j = i;
        for (int i = 0; i < other.getLength(); i++)
        {
            items[j++] = other.items[i];
            length++;
        }

    }
};

int main()
{

    cout << "Hello This is Array ADT demo\n";
    int size;
    cout << "Enter the Array Size: ";
    cin >> size;
    //fill
    Array myarray(size);
    myarray.Fill();
    
    myarray.Display();

    //search
    cout << "Enter the value to search for \n";
    int key;
    cin >> key;

    int index = myarray.Search(key); // storing the index

    if (index == -1)
        cout << "Item not found \n";
    else
        cout << "Item found @ position " << index << endl;

    //append
    int element;
    cout << "Enter new item to add to the array: ";
    cin >> element;
    myarray.Append(element);
    myarray.Display();
    
    //insert
    cout << "Enter the  index and new element to add: ";
    cin >> index;
    cin >> element;
    myarray.Insert(index, element);
    myarray.Display();

    //delete
    cout << "Enter the   index of the element you want to delete: ";
    cin >> index;
    myarray.Delete(index);
    myarray.Display();


    cout << "Array size = " << myarray.getSize() << "   while length = " << myarray.getLength() << "\n";

    // enlarge array

    // int newsize;
    /* cout << "Enter New Size\n";
    cin >> newsize;
    myarray.Enlarge(newsize);
    cout << "Array size = " << myarray.getSize() << "   while length = " << myarray.getLength() << "\n";
    myarray.Display();*/

    // cout << "\nNew array other \n";
    // Array arr2(3);
    // arr2.Fill();

    //merge
    
    // myarray.Merge(arr2);
    // cout << "Array size = " << arr2.getSize() << ", while length = " << arr2.getLength() << "\n";
    // arr2.Display();

    return 0;
}