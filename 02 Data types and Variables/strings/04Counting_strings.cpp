#include <string>
#include <iostream>
using namespace std;

int main()
{

    string line;
    int vowels, consonants, digits, words, white_space;

    vowels =  consonants = digits = words = white_space = 0;

    cout << "Enter a line of string: ";
    getline(cin, line);

    for(int i = 0; i < line.length(); ++i) // 
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || 
        line[i]=='I' || line[i]=='O' || line[i]=='U')
        {
            ++vowels;
        }
        else if( (line[i]>='A'&& line[i]<='Z') || (line[i]>='a'&& line[i]<='z') )
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++white_space;

            if (line[i-1] != ' ')
            {
                ++words;
            }
        }

    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "words: " << words + 1 << endl;
    cout << "white spaces: " << white_space << endl;


    return 0;
}