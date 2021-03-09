#include <iostream>

using namespace std;

bool Include(const char* s);

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	if (Include(s))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}


bool Include(const char* s)
{
	int k = 1; // оголошується змінна, яка рахує кількість однакових символів
	for (int i = 0; s[i + 1] != '\0'; i++)
	{
		if (s[i] == s[i + 1]) { // перевірка на однаковість символів
			if (k < 3) { // перевірка на те, чи це не 4 однаковий символ
				k++; // до лічильника змінних додається 1
			}
			else { 
				return true; // Якщо символ є 4, то функція завершується і повертається true
			}
		}
		else {
			k = 1; // скидається рахунок однакових перемінних
		}
	}
	return false;
}
