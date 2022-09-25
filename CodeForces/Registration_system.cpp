// question link: https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<string,int> s;

    for (int i = 0; i < n; i++){

        if(s.count(arr[i])){

            cout << arr[i] << s[arr[i]]++ << endl;
        
        }
        else{
            cout << "OK" << endl;
            s[arr[i]] = 1;
        }

    }
}
    return 0;
}