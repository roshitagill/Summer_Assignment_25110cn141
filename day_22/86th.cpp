#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = 0;
    int words = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            words++;
        }
    }

    cout << "the number of words are " << words;

    return 0;
}