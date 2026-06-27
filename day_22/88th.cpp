#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter the string :";
    cin.getline(str, 100);
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    int write = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != ' ')
        {
            str[write] = str[i];
            write++;
        }
    }
    str[write] = '\0';
    cout << "string without spaces is\n"
         << str;
}