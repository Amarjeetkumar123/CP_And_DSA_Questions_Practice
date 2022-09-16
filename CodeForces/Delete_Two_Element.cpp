// Question link : https://codeforces.com/problemset/problem/1598/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

    while (t--){
        ll n;
        cin>>n;
 
        ll sum = 0;
        vl a(n + 1);
        
        for (int i = 1;i<=n;i++){
            cin>>a[i];
            sum += a[i];
        }
        
        //find the number of pairs (i,j) such that a[i] + a[j] == 2 * sum / n
        ll req = 2 * sum / n;
        map<ll,ll>cnt;
        ll ans = 0;
 
        if ((sum - req) * n != sum * (n - 2)){
            cout<<0<<'\n';
            continue;
        }
 
        for (int i = 1;i<=n;i++){
            ans += cnt[req - a[i]];
            cnt[a[i]]++;
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}
