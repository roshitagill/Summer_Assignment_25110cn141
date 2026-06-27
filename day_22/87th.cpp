#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    char e;
    cout << "Enter a character whose frequency you want to find : ";
    cin >> e;
    int length = 0;
    int words = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    int freq = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == e)
        {
            freq++;
        }
    }
    cout << "frequency of the character " << "'" << e << "'" << " is ~ " << freq;
    return 0;
}
