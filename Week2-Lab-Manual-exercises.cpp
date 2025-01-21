//----------------------Code for every possibility of decoding
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st;
    cout << "Enter the string size: ";
    int size;
    cin >> size;
    char *arr = new char[size];
    int converter;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter character number " << i + 1 << " of string to decode: ";
        cin >> arr[i];
    }
    char *arr2 = new char[size];
    for (int key = 1; key < 26; key++)
    {
        for (int i = 0; i < size; i++)
        {
            arr2[i] = arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            converter = arr2[i];
            if (65 <= converter && converter <= 90)
            {
                converter -= 64;
                converter -= key;
                if (converter > 0)
                {
                    converter %= 26;
                }
                else
                {
                    converter += 26;
                }
                converter += 64;
                arr2[i] = converter;
            }
            if (97 <= converter && converter <= 122)
            {
                converter -= 96;
                converter -= key;
                if (converter > 0)
                {
                    converter %= 26;
                }
                else
                {
                    converter += 26;
                }
                converter += 96;
                arr2[i] = converter;
            }
        }
        cout << "This is your decoded string " << key << ": " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

//--------------------------Task 1
//The encoded string is: 'CAESAR CIPHERS ARE QUITE EASY TO CRACK'

//--------------------------Task 2
//The key is: 17

//--------------------------Task 3
//Write code in Cypher-encryption.cpp file

//--------------------------Task 4
//Yes, upper code in this file is for this purpose to calculate all 25 possibilities

//--------------------------Task 5
// To make “CAESAR” become “MKOCKB” the key will be = 10

//--------------------------Task 6
// To make “CIPHER” become “SYFXUH” the key will be = 16

//--------------------------Task 7
//To encode 'MONIS' using key '5' the encoded string will be = RTSNX

//--------------------------Task 8
//By multiplying it by '-1' (Means negative of it)