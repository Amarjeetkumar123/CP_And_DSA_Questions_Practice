// Question link: https://codeforces.com/contest/6/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    int n, m;   // n -> rows  , m -> cols
    cin >> n >> m;
    char ch;
    cin >> ch;

    char arr[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++){

        int count = 0;

        for (int j = 0; j < m; j++){

            if(arr[i][j] == ch){
            // right check
            if (i < n && j < m && arr[i][j+1] != '.' && arr[i][j+1] == ch)
                count++;
            // left check
            if (i < n && j >= 0 && arr[i][j-1] != '.' && arr[i][j-1] == ch)
                count++;
            // up check
            if (i >= 0 && j < m && arr[i-1][j] != '.' && arr[i-1][j] == ch)
                count++;
            // down check
            if (i < n && j < m && arr[i+1][j] != '.' && arr[i+1][j] == ch)
                count++;

            }   
            ans = max(ans, count);
        }
    }

    cout << ans << endl;
}
    return 0;
}