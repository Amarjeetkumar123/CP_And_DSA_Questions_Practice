// Question link: https://codeforces.com/problemset/problem/1703/D

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin>>t;

while(t--){

    int n;
    cin >> n;
    vector<string>arr(n);
    set<string> s;
    for(auto &x : arr){
         cin >> x;
         s.insert(x);
    }
   
    for (int i = 0; i < n; i++){
        bool flag = false;
        for (int j = 1; j < arr[i].size(); j++){

            if (s.count(arr[i].substr(0, j)) && s.count(arr[i].substr(j)))
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
}
    return 0;
}