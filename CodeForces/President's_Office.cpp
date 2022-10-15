// question link: https://codeforces.com/problemset/problem/6/B

#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//#include<climits>
//#include<map>
//#include<unordered_map>
//#include<queue>
//#include<stack>
//#include<list>
#include<set>
const int N = 100005;
using namespace std;
#define ll long long
#define endl '\n'
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
 
 
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int t = 1;
	//cin>>t;
	while(t--){
		int n, m;
		char president;
		cin>>n>>m>>president;
		char arr[n][m];
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j)
				cin>>arr[i][j];
		}
 
		set<char> st;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				if(arr[i][j] == president){
                    // up
					if(i > 0 and arr[i-1][j] != '.' and arr[i-1][j] != president)
						st.insert(arr[i-1][j]);
                    // down
					if(i+1 < n and arr[i+1][j] != '.' and arr[i+1][j] != president)
						st.insert(arr[i+1][j]);
                    // left
					if(j > 0 and arr[i][j-1] != '.' and arr[i][j-1] != president)
						st.insert(arr[i][j-1]);
                    // right
					if(j+1 < m and arr[i][j+1] != '.' and arr[i][j+1] != president)
						st.insert(arr[i][j+1]);
				}
			}
		}
 
		cout<<(int)(st.size());
 
	}
	return 0;
}