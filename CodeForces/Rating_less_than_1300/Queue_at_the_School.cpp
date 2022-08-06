// Question Link : https://codeforces.com/problemset/problem/266/B

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, time;
    cin >> n >> time;

    string s;
    cin >> s;

    while (time--)
    {
        for (int i = 0; i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){

                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << s;

    return 0;
}