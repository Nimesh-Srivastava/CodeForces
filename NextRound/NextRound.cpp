#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[105];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cutoff = arr[k - 1];
	if (cutoff > 0) {
		for (int i = 0; i < n; i++) {
			if (arr[i] >= cutoff) {
				cnt++;
			}			
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (arr[i] > cutoff) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}