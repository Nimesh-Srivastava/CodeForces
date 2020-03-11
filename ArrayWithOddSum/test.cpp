//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int siz;
//		cin >> siz;
//		int arr[2000];
//		int odd = 0, eve = 0, time = 0;
//		for (int i = 0; i < siz; i++) {
//			cin >> arr[i];
//			if (arr[i] % 2 != 0) {
//				odd = arr[i];
//				time++;
//			}
//			else {
//				eve++;
//			}
//		}
//		if (time % 2 != 0) {
//			cout << "YES" << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}



//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int siz;
//		cin >> siz;
//		int sum = 0;
//		int odd = -1;
//		int eve = -1;
//		int arr[1500];
//		for (int i = 0;i < siz;i++) {
//			cin >> arr[i];
//			if (arr[i] % 2 != 0) {
//				odd = arr[i];
//				//cout << "odd number : " << odd << endl;
//			}
//			else {
//				eve = arr[i];
//				//cout << "even number : " << eve << endl;
//			}
//			sum += arr[i];
//			if (sum % 2 == 0) {
//				//cout << "sum : " << sum << " is found to be even" << endl;
//				sum -= arr[i];
//				//cout << "sum : " << sum << " after removing last number from sum" << endl;
//				if (arr[i] % 2 != 0) {
//					//cout << "sum found out to be odd, sum : " << sum << endl;
//					if (eve == -1) {
//						sum += arr[i];
//					}
//					else {
//						sum += eve;
//					}
//					//cout << "after adding even number, sum : " << sum << endl;
//				}
//				else {
//					//cout << "sum found out to be even, sum : " << sum << endl;
//					if (odd == -1) {
//						sum += arr[i];
//					}
//					else {
//						sum += odd;
//					}
//					//cout << "after adding odd number, sum : " << sum << endl;
//				}
//			}
//		}
//		if (sum % 2 != 0) {
//			cout << "YES" << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
