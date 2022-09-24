// Question link: https://codeforces.com/problemset/problem/22/A

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
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }

    auto it = s.begin();
    
    if(s.size() < 2)
        cout << "NO";
    else
        cout<< *(++it);
}
    return 0;
}