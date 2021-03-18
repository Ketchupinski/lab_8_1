#include <iostream>
using namespace std;
bool Include(char* str);

int main()
{
	char str[100]; // оголошується масив
	cout << "Enter string:" << endl;
	cin.getline(str, 100); // написані символи вводяться в масив
	if (Include(str)) // запускається функція та повертається true або false
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

bool Include(char* str)
{
	int d = strlen(str); // провірка скільки символів є в стороці
	for (int i = 0; i < d - 3; i++) { 
		char c[5] = { str[i], str[i], str[i], str[i] }; // створюється масив з 4 однакових символів
		if (strstr(str, c)) { // провірка чи є 4 однакові символи в строці
			return true; // якщо є, то повертається true
		}
	}
	return false; // якщо немає 4 однакових символів, то повертається false
}