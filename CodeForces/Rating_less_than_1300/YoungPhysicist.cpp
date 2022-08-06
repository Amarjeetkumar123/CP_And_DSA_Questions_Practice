// Question Link : https://codeforces.com/problemset/problem/69/A

#include<iostream>
using namespace std;

int n,a,b,c,d,e,f;

int main(){
    
    cin>>n;
    while(n--){

        cin >> a >> b >> c;
        
        d += a, e += b, f += c;
    }

    // cout << (d | e | f ? "NO" : "YES");
    if(d | e | f)
        cout << "NO";

    else
        cout << "YES";

    return 0;
}