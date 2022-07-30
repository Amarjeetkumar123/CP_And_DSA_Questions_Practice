// Question Link : https://codeforces.com/problemset/problem/600/B
/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , m;
    cin>>n >> m;

    int a[n];
    int b[m];

    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<m;i++)
    cin>>b[i];

    int ans[m];

    for(int i=0;i<m;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j] <= b[i])
            cnt++;
        }
        ans[i] = cnt;
    }

    for(int i=0;i<m;i++)
    cout<<ans[i]<<" ";

    return 0;
}

*/

// This above code gives TLE because TimeComplexity is O(n2).

// Optimise Solution:

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        ll n,m;
        ll i,j,k;

        cin>>n>>m;
        ll a[n],b[m];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<m;i++)
            cin>>b[i];

        sort(a,a+n);

        for(i=0;i<m;i++)
        {
            cout<<upper_bound(a,a+n,b[i])-a<<" ";
        }

        return 0;
}