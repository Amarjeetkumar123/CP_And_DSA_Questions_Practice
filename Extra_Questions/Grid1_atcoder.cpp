// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int dp[1005][1005];

int32_t main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
//cin>>t;

	while (t--) {

		int n, m;
		cin >> n >> m;

		char grid[n][m];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> grid[i][j];
			}
		}

// tabulation method
		dp[0][0] = 1;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {

				if (grid[i][j] == '#') {
					dp[i][j] = 0;
					continue;
				}

				if (i > 0)	dp[i][j] += dp[i - 1][j];
				dp[i][j] %= MOD;
				if (j > 0)	dp[i][j] += dp[i][j - 1];
				dp[i][j] %= MOD;

			}
		}

		cout << dp[n - 1][m - 1];
	}

	return 0;
}