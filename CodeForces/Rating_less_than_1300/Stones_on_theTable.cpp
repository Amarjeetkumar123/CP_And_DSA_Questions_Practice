// Question link: https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    char ch[n];

    int c = 0;

    for (int i = 0; i < n; i++){
        cin >> ch[i];
    }

    for (int i = 0; i < n-1; i++){
        if(ch[i] == ch[i+1])
            c++;
    }

    cout << c << endl;

    return 0;
}