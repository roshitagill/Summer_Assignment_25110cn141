#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = 0;
    bool pal = true;
    while (str[length] != '\0')
    {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        while (start < end && !isalnum(str[start]))
        {
            start++;
        }

        while (start < end && !isalnum(str[end]))
        {
            end--;
        }
        if (tolower(str[start]) != tolower(str[end]))
        {
            pal = false;
            break;
        }

        start++;
        end--;
    }
    if (pal == false)
    {
        cout << "The given string is not a palindrome";
    }
    else
    {
        cout << "The given string is a palindrome";
    }
    return 0;
}