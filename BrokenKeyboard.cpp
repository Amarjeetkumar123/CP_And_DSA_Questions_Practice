// Question Link : https://codeforces.com/problemset/problem/1251/A

#include<bits/stdc++.h>
using namespace std;
int main(){

    string str; int T;
    int num[1005];

    cin>>T;

    while(T--){
        int cnt = 1;
        memset(num , 0 , sizeof num);
        cin>>str;

        for(int i=1; i<=str.length(); i++){

            if(str[i] == str[i-1]){
                cnt++;
            }
            else{
                if(cnt % 2 == 1){
                    num[str[i-1]-'a'] = 1;
                }
                cnt = 1;
            }
        }

        for(int i=0;i<26;i++){
            if(num[i] == 1){
                cout<< char(i+'a');
            }
        }
        cout<<endl;
    }


    return 0;
}