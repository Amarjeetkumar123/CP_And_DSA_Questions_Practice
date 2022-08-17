// Question link: https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>
using namespace std;

int solve(int *arr , int n , int k , vector<int>&dp){
    // base case
    if(n <= 0){
        return 0;
    }

    if(dp[n] != -1)
        return dp[n];

    int ans = INT_MAX;

    for (int i = 1; i <= k; i++){

        if(n-i < 0){
            break;
        }
        int value = solve(arr, n - i, k,dp);
        ans = min(ans, abs(arr[n] - arr[n - i]) + value);
        dp[n] = ans;
    }

    return dp[n];
}

int main(){

    int n, k;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    //memoization
    vector<int> dp(n, -1);

    cout<< solve(arr, n - 1, k,dp);

    return 0;
}
