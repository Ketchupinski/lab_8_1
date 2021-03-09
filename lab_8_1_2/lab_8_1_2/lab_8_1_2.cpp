#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void Change(char* str);

int main()
{
    // заміна символів однакових символів на '**'
    char str[50]; // заданий текст

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    Change(str);

    cout << str << endl;
}

void Change(char* str) {
    int i, j;
    int d;
    char str2[50]; // допоміжний масив

    j = 0; // поточна позиція в масиві str2
    d = strlen(str); // довжина рядка str

    for (i = 0; i < d; i++)
    {
        if ((str[i] == str[i + 1]) && (str[i] == str[i + 2]) && (str[i] == str[i + 3])) // провірка на одинакові символи
        {
            str2[j++] = '*';
            str2[j++] = '*';
            i += 3; // заміна символів
        }
        else
        {
            str2[j++] = str[i]; // якщо не проходить умова, то просто символ записується в масив і йде далі
        }
    }
    
    str2[j] = '\0'; // додає символ кінця рядка
    strcpy(str, str2); // копіює допоміжний масив у вихідний
}
