// Question Link : https://codeforces.com/contest/363/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;

    cin >> n >> k;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

        int ans = 1;
        int sum = 0;

    for (int i = 1; i <= k; i++)
        sum += arr[i];

    int Min = sum;

    // slidding window 
    int l = 0, r = k;

    while(r < n){
        l++;
        r++;
        sum -= arr[l];
        sum += arr[r];
        if(sum < Min){
            Min = sum;
            ans = l+1;
        }
    }
    cout << ans << endl;

    return 0;
}