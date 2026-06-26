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
        str[length] = toupper(str[length]);

        length++;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~ Letters in Upper Case are ~~~~~~~~~~~~~~~~~~~~~~~~ \n"
         << str;
    return 0;
}