// Question link: https://codeforces.com/problemset/problem/1282/B1

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define AS 200005

int n, p, k;
int cost[AS] = {0};

int Price(){
    int dp[AS] = {0};

    sort(cost, cost + n);

    for (int i = 0; i < n; i++){
        if (i < k - 1){
            dp[i] = cost[i] + ((i == 0) ? 0 : dp[i - 1]);
        }
        else if (i == k - 1){
            dp[i] = cost[i];
        }
        else{
            dp[i] = dp[i - k] + cost[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        if(dp[i] <= p){
            ans = i + 1;
        }
    }

    return ans;
}

int32_t main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin>>t;

while(t--){

    cin >> n >> p >> k;
    for (int i = 0; i < n; i++){
        cin >> cost[i];
    }

    cout << Price() << endl;
}
    return 0;
}