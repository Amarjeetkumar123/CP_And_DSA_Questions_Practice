// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
// #define int long long
int32_t main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
//cin>>t;

	while (t--) {

		int n, d;
		cin >> n >> d;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}


		int cnt = 0;

		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				if (arr[j] - arr[i] == d) {
					for (int k = j + 1; k < n; k++) {
						if (arr[k] - arr[j] == d) {
							cnt++;
							break;
						}
					}
				}
			}
		}

		cout << cnt << endl;
	}
	return 0;
}