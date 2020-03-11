#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int siz;
		cin >> siz;
		int sum = 0;
		int odd = -1;
		int eve = -1;
		int arr[2500];
		for (int i = 0;i < siz;i++) {
			cin >> arr[i];
			if (arr[i] % 2 != 0) {
				odd = arr[i];
			}
			else {
				eve = arr[i];
			}
			sum += arr[i];
			if (sum % 2 == 0) {
				sum -= arr[i];
				if (arr[i] % 2 != 0) {
					if (eve == -1) {
						sum += arr[i];
					}
					else {
						sum += eve;
					}
				}
				else {
					if (odd == -1) {
						sum += arr[i];
					}
					else {
						sum += odd;
					}
				}
			}
		}
		if (sum % 2 != 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}