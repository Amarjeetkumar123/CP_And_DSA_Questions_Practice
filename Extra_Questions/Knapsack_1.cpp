// Atcoder Question

#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
using namespace std;
#define int long long

// Top Down Approach
int knapsack(vector<int>&weight, vector<int>&value, int capacity, int idx , vector<vector<int>>&dp) {
	// base case
	if (idx == 0) {
		if (weight[0] <= capacity)
			return value[0];
		else
			return 0;
	}

	if (dp[idx][capacity] != -1) {
		return dp[idx][capacity];
	}

	// recursive case

	// include
	int option1 = 0;
	if (weight[idx] <= capacity) {
		option1 = value[idx] + knapsack(weight, value, capacity - weight[idx], idx - 1, dp);
	}

	// exclude
	int option2 = 0 +  knapsack(weight, value, capacity, idx - 1, dp);

	int ans = max(option1, option2);

	return dp[idx][capacity] = ans;
}



// Bottom Up Approach


int32_t main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
//cin>>t;

	while (t--) {

		int n;	// Number of items
		int w;	// Given weight
		cin >> n >> w;

		vector<int>weight;
		vector<int>value;
		int x , y;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;	// x -> items weights and y -> its values
			weight.push_back(x);
			value.push_back(y);
		}

		vector<vector<int>>dp(n, vector<int>(w + 1, -1));

		cout << knapsack(weight, value, w, n - 1 , dp) << endl;


	}
	return 0;
}