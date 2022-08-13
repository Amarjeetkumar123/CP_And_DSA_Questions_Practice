// Question link: https://codeforces.com/problemset/problem/285/C

#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
	int n;
	cin >> n;   // 5
	vector<int> a(n, 0);

	for(int i = 0; i < n; i++)	cin >> a[i];    // -3 5 -3 3 3 

	sort(a.begin(), a.end());   // -3 -3 3 3 5 

	if(a[0] == 1 and a[n-1] == n-1)
	{
		cout<<"0"<<endl;
		return 0;
	}
	
	int t = 1;
	ll movesCount = 0;
 
	for(int i = 0; i < n; i++)
	{
		if(a[i] < t)    // -3 < 1 for index = 0 so on 1 2 3 4
		{
			movesCount += t-a[i];   // 1-(-3) = 4 moves to make 1 so on 2 3 4 5 
		}
		else if(a[i] > t)
		{
			movesCount += a[i]-t;
		}
		t++;
	}
	cout<<movesCount;   // 1 2 3 4 5 is output ko banane me 10 moves
 
	return 0;
}