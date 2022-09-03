// Question link : https://codeforces.com/contest/118/problem/A

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

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    vector<char> ans;

    for (int i = 0; i < s.length(); i++){
         
         if(s[i] != 'a' && s[i] != 'y' && s[i] != 'o' && s[i] != 'e' && s[i] != 'i' && s[i] != 'u' ){
            
             ans.push_back(s[i]);
         }
    }

    for (int i = 0; i < ans.size(); i++){
        cout <<"."<< ans[i];
    }
}
    return 0;
}