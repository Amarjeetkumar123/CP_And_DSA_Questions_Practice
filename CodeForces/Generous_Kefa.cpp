// Question link: https://codeforces.com/contest/841/problem/A
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;   // n -> number of ballons and k -> number of friends
    cin >> n >> k;
    string s;   // color of ballons
    cin >> s;

    int len = s.length();

    unordered_map<char,int> mp;

    for (int i = 0; i < len;i++){
        mp[s[i]]++;
    }

    int flag = 1;   // YES

    for(auto i : mp){
        if(i.second > k){       // if count of any character is greater than k then friends are upset
            flag = 0;   // NO
            break;
        }
    }

    cout<< (flag ? "YES" : "NO");

    return 0;
}