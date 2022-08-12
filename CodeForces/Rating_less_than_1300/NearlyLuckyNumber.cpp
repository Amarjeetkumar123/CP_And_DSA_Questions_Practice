// Question link: https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    string num;
    cin >> num;

    int count = 0;
    for (int i = 0; i < num.length(); i++){
        if(num[i] == '4' || num[i] == '7'){
            count++;
        }
    }

    cout << ((count == 4 || count == 7) ? "YES" : "NO");

    return 0;
}