#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int length = 0;
    int co = 0;
    int vo = 0;
    cout << "Enter a String : ";
    cin.getline(str, 100);
    while (str[length] != '\0')
    {
        char ch = tolower(str[length]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vo++;
            }
            else
            {
                co++;
            }
        }
        length++;
    }
    cout << "Vowel in the string is ~ " << vo << " and Consonants are ~ " << co;
    return 0;
}