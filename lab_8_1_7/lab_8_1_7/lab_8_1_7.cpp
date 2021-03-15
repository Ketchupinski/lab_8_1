#include <iostream>
#include <string>
using namespace std;

bool Include(const string s);

int main()
{
	string str; // оголошується масив 
	cout << "Enter string:" << endl;
	getline(cin, str); // введенні символи заносяться в масив
	if (Include(str)) // провіряється чи є 4 однакові літери в рядку 
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

bool Include(const string s)
{
	int d;
	int k = 0;
	d = s.length();
	for (size_t i = 0; i < d - 3; i++) {
		string c = { s[i], s[i], s[i], s[i] }; // створюється допоміжний масив з 4 однакових літер
		size_t found = s.find(c); // проводиться пошук 4 однакових літер в рядку
		if (found != string::npos) { // Якщо функція пошуку найшла те, що шукала, то повертається true
			return true;
		}
	}
	return false; // Якщо в рядку немає 4 однакових символів, то повертається false
}
