// Question Link: https://codeforces.com/problemset/problem/274/A

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    int n, k;
		cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
 
		set<int> s;
 
		for(int i = 0; i < n; i++){
			if(arr[i]%k != 0){
				s.insert(arr[i]);
			}
			else if(s.count(arr[i]/k) == false){
				s.insert(arr[i]);
			}
		}
		cout<<s.size();
}
    return 0;
}