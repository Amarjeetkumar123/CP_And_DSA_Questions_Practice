// Question Link : https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;

bool check(int n){

        int a = n % 10;
        n = n / 10;

        int b = n % 10;
        n = n / 10;

        int c = n % 10;
        n = n / 10;

        int d = n % 10;
        n = n / 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
            return true;
        else
            return false;
}
int main(){

    int n;  // year
    cin >> n;

    while(true){

        n++;

        if(check(n)){
            break;
        }
    }

    cout << n << endl;

    return 0;
}