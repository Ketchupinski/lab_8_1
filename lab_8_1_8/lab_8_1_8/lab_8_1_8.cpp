#include <iostream>
#include <string>
using namespace std;

void Change(string& s);

int main()
{
	string str; // оголошується масив символів
	cout << "Enter string:" << endl;
	getline(cin, str); // в масив вводяться введені символи
	Change(str); // викликається функція заміни одинакових символів 
	cout << "Result: " << str << endl;
}

void Change(string& str)
{
	for (size_t i = 0; i < str.length() - 3; i++) // через кожну ітерацію йде провірка скільки у масиві символів 
	{
		if ((str[i] == str[i + 1]) && (str[i] == str[i + 2]) && (str[i] == str[i + 3])) { // провірка на одинакові символи
			str.replace(i, 4, "**"); // заміна однакових символів на зірочки
			i += 1; // збільшення лічильника, щоб ітерація пропускала замінені символи
		}
	}
}