// Question link: https://codeforces.com/contest/672/problem/D
#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll tsum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            tsum += arr[i];
        }

        sort(arr, arr+n);

        int l1 = arr[0], r1 = tsum/n, mid1, poorest;

        while(l1 <= r1){
            mid1 = (l1+r1)/2;
            ll daysReq = 0;
            for (int i = 0; i < n; ++i){
                if(arr[i] >= mid1)
                    break;
                daysReq += (mid1 - arr[i]);
            }
            if(daysReq <= k){
                poorest = mid1;
                l1 = mid1 + 1;
            }
            else
                r1 = mid1 - 1;
        }

        int avg1 = tsum/n;
        if(tsum%n != 0)
            avg1++;

        int l2 = avg1, r2 = arr[n-1], mid2, richest;
        while(l2 <= r2){
            mid2 = (l2+r2)/2;
            ll daysReq = 0;
            for (int i = n-1; i >= 0; --i)
            {
                if(arr[i] <= mid2)
                    break;
                daysReq += (arr[i] - mid2);
            }

            if(daysReq <= k){
                richest = mid2;
                r2 = mid2 - 1;
            }
            else
                l2 = mid2 + 1;

        }

        cout<<richest-poorest;


    }
    return 0;
}