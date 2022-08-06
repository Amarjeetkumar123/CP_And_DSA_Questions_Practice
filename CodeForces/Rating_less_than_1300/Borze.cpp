// Question Link : https://codeforces.com/problemset/problem/32/B

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;

    cin >> str;
    string ans;
    int i = 0;
    while (i < str.size())
    {
        
        if(str[i] == '.'){
             ans += '0';
             i++;
        }   

        else if(str[i] == '-' && str[i+1] == '.'){
            ans += '1';
            i = i + 2;
        }

        else if(str[i] == '-' && str[i+1] == '-'){
            
             ans += '2';
             i = i + 2;
        }
           
    }

    cout << ans;

    return 0;
}