// Question link: https://codeforces.com/problemset/problem/227/B

#include<bits/stdc++.h>
using namespace std;
const int num = 1e5 + 10;
int main(){

    long long n;
    cin >> n;
    int arr[num];


    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x] = i;
    }


    long long m;
    cin >> m;
    long long ans1 = 0, ans2 = 0;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        ans1 += arr[x];
        ans2 += (n - arr[x] + 1);
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}