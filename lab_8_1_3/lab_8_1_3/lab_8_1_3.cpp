#include <iostream>

using namespace std;

bool Include(const char* s, int i, int k);

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	if (Include(s, 0, 1))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}


bool Include(const char* s, int i, int k) {
	if (s[i + 1] != '\0') { // перевірка чи масив ще не закінчився
		if (s[i] == s[i + 1]) { // перевірка чи наступний символ такий самий, як і наступний
			if (k < 3) { // перевірка, чи кількість однакових символів, ще не 4
				Include(s, i + 1, k + 1); 
			}
			else {
				return true; // Якщо кількість однакових символів 4, то повертається true
			}
		}
		else {
			Include(s, i + 1, 1); // Якщо наступний символ не такий же як і минулий, то продовждується провірка на наступні символи
		}
	}
	else
		return false; // якщо немає серії з 4 однакових символів, то повертається false
}

