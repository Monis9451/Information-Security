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
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int converter;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter character number " << i + 1 << " of string to encode: ";
        cin >> arr[i];
        converter = arr[i];
        if (65 <= converter && converter <= 90)
        {
            converter -= 64;
            converter += key;
            converter %= 26;
            converter += 64;
            arr[i] = converter;
        }
        if (97 <= converter && converter <= 122)
        {
            converter -= 96;
            converter += key;
            converter %= 26;
            converter += 96;
            arr[i] = converter;
        }
    }
    cout << "This is your encoded string: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}