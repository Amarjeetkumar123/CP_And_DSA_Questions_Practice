// Question Link : https://codeforces.com/problemset/problem/61/A

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++){

        if(a[i] != b[i]){
            a[i] = '1';
        }
        else if(a[i] == b[i]){
            a[i] = '0';
        }
    }

    cout << a << endl;
}
    return 0;
}