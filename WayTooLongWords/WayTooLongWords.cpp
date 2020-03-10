#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string str, strNew;		
		getline(cin, str);
		int length = strlen((str).c_str());
		if (length > 10) {
			char strC[200];
			strC[0] = 'A';
			strcpy_s(strC, length + 1, (str).c_str());
			strNew = strC;
			strNew.erase(0, length - 1);
			str.erase(1);
			length -= 2;
			cout << str << length << strNew << endl;
		}
		else {
			cout << str << endl;
		}
	}
	return 0;
}