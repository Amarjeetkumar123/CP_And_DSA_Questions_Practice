// Question link: https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if(s1 == s2){
        cout << "0";
    }
    else if(s1 < s2){
        cout << "-1";
    }
    else{
        cout << "1";
    }
    
}
    return 0;
}