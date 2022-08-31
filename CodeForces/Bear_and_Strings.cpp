// Question link: https://codeforces.com/contest/385/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    string s;
    cin >> s;

    int ans = 0;
    int pos = 0;
    if(s.size() < 4){
        cout << ans << endl;
        return 0;
    }

    for (int i = 0; i < s.size() - 3; i++){

        if(s.substr(i,4) == "bear"){
            pos = i + 1;
        }

        ans = ans + pos;
    }

    cout << ans << endl;
}
    return 0;
}