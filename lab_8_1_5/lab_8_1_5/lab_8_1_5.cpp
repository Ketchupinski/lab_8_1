#include <iostream>
using namespace std;
bool Include(char* s);

int main()
{
	char s[101]; // оголошується масив
	cout << "Enter string:" << endl;
	cin.getline(s, 100); // написані символи вводяться в масив
	if (Include(s)) // запускається функція та повертається true або false
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

bool Include(char* s)
{
	int d = strlen(s); // провірка скільки символів є в стороці
	for (int i = 0; i < d - 3; i++) { 
		char c[5] = { s[i], s[i], s[i], s[i] }; // створюється масив з 4 однакових символів
		if (strstr(s, c)) { // провірка чи є 4 однакові символи в строці
			return true; // якщо є, то повертається true
		}
	}
	return false; // якщо немає 4 однакових символів, то повертається false
}