// Question Link : https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;

    int Matrix[n + 1][n + 1];
    int x, y;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            cin >> Matrix[i][j];

            if(Matrix[i][j] == 1){
                x = i;
                y = j;   
            }
        }
    }   

    // reach in middle for beautiful matrix
    int a = 3;
    int b = 3;

    int ans = abs(a - x) + abs(b - y);

    cout << ans;

    return 0;
}