#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
using namespace std;
// #define int long long
int dp[100005];
int32_t main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
//cin>>t;

	while (t--) {

		int n , k;
		cin >> n;
		cin >> k;

		vector<int>arr(n);
		for (auto &x : arr)
			cin >> x;


		dp[0] = 0;

		for (int i = 1; i <= k; i++) {
			dp[i] = 0;
			for (auto x : arr) {
				if (i >= x && dp[i - x] == 0) {
					dp[i] = 1;
					break;
				}
			}
		}

		if (dp[k] == 1)
			cout << "First";
		else
			cout << "Second";
	}

	return 0;
}