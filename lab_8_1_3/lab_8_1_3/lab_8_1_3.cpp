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
	if (s[i + 1] != '\0') {
		if (s[i] == s[i + 1]) {
			if (k < 3) {
				Include(s, i + 1, k + 1);
			}
			else {
				return true;
			}
		}
		else {
			Include(s, i + 1, 1);
		}
	}
	else
		return false;
}

