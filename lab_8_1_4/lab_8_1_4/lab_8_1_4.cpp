#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void Change(char* str, char* str2, int i, int j, const int d);

int main()
{
    // заміна символів однакових символів на '**'
    char str[50]; // заданий текст
    cout << "Enter string:" << endl;
    cin.getline(str, 50);
    int d;
    char str2[50]; // допоміжний масив
    d = strlen(str); // довжина рядка str



    Change(str, str2, 0, 0, d);

    cout << str << endl;
}

void Change(char* str, char* str2, int i, int j, const int d) {
    if (i < d)
    {
        if ((str[i] == str[i + 1]) && (str[i] == str[i + 2]) && (str[i] == str[i + 3])) // провірка на одинакові символи
        {
            str2[j++] = '*';
            str2[j++] = '*';
            Change(str, str2, i + 4, j, d);
            }
        else
        {
            str2[j++] = str[i]; // якщо не проходить умова, то просто символ записується в масив і йде далі
            Change(str, str2, i + 1, j, d);
        }
    }
    else 
    {
        str2[j] = '\0'; // додає символ кінця рядка
        strcpy(str, str2); // копіює допоміжний масив у вихідний
    }
}
