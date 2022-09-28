// question link: https://atcoder.jp/contests/dp/tasks/dp_h

#include<bits/stdc++.h>
using namespace std;

char grid[1001][1001];
#define mod 1000000007

int solve(int h , int w){

    int dp[h + 1][w + 1];
    dp[h][w] = 1;

    for (int i = h; i >= 1; i--){
        for (int j = w; j >= 1; j--){

            if (i == h && j == w)
                continue;

            if(grid[i][j] == '#')
                dp[i][j] = 0;
            else{

                
            if (i == h)
            {
                dp[i][j] = (dp[i][j+1]) % mod;
            }
            else if(j == w){
                dp[i][j] = (dp[i + 1][j]) % mod;
            }
            else{
                dp[i][j] = (dp[i + 1][j] + dp[i][j+1])%mod;
            }
            }
        }
    }
    return dp[1][1];
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    int h, w;
    cin >> h >> w;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++){
            cin >> grid[i][j];
        }
    }

    cout << solve(h, w);
}
    return 0;
}