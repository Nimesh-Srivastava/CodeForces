#include<iostream>

using namespace std;

int main() {
	long long int l, b, a;
	cin >> l >> b >> a;
	if (l % a != 0) {
		l /= a;
		l++;
		if (b % a != 0) {
			b /= a;
			b++;		
		}
		else {
			b /= a;
			if (b == 0) {
				b++;
			}
		}
	}	
	else {
		l /= a;
		if (l == 0) {
			l++;
		}
		if (b % a != 0) {
			b /= a;
			b++;
		}
		else {
			b /= a;
			if (b == 0) {
				b++;
			}
		}
	}	
	cout << l * b;
	return 0;
}