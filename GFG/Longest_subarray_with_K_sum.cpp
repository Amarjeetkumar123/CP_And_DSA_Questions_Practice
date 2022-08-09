// Question Link : https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int solve(int *a, int n, int k) {
	unordered_map<int, int>m;
	int pre = 0;
	int len = 0;

	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == k) {
			len = max(len, i + 1);
		}
		
		if (m.find(pre - k) != m.end()) {
			len = max(len, i - m[pre - k]);
		} 

		if(!m.count(pre)) {
			m[pre] = i;
		}
	}
	return len;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;

	cout << solve(a, n, k) << endl;
}