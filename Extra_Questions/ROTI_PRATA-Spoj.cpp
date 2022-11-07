// < !-- #include<bits/stdc++.h> -->
#include<iostream>
#include<algorithm>
using namespace std;
#define int long long
bool isPossible(int p , int *arr , int mid , int n) {

	int time = 0;
	int prata = 0;

	for (int i = 0; i < n; i++) {
		time = arr[i];
		int j = 2;

		while (time <= mid) {
			prata++;
			time += arr[i] * j;
			j++;
		}
		if (prata >= p)
			return true;
	}
	return false;
}

int32_t main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {

		int p;
		cin >> p;
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int s = 0;
		int e = 1e8;
		int ans = -1;

		int mid = s + (e - s) / 2;

		while (s <= e) {

			if (isPossible(p, arr, mid, n))
			{
				ans = mid;
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}

			mid = s + (e - s) / 2;
		}

		cout << ans << endl;
	}
	return 0;
}