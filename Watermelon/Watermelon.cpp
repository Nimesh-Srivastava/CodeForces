#include<iostream>

using namespace std;

int main() {
	int weight;
	cin >> weight;
	int cnt = 0;
	int arr[250];
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (((i + j) == weight) && ((i % 2 == 0) && (j % 2 ==0))) {
				cnt++;
			}
		}
	}
	if (cnt > 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}