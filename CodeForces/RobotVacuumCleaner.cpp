// Question link : https://codeforces.com/problemset/problem/922/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(string ss){
    
    ll cs = 0 , fans = 0;

    for(int i=0;i<ss.size();i++){
        // cout<<"i = "<<i<<endl<<endl;
        if(ss[i] == 's'){
            
             cs++;
            //  cout<<"cs = "<<cs<<endl;
        }
        else{
            
            fans += cs;
            // cout<<"fans = "<<fans<<endl;
        }
        
    }

    return fans;
}

bool comp(string a,string b){
return solve(a+b)>solve(b+a);
}

int main(){

    int n;
    cin>>n;
    string s;
    vector<string>v;

    while (n--)
    {
        cin>>s;
        v.push_back(s);
    }


    sort(v.begin(),v.end(),comp);

    // for(auto i : v)
    // cout<<i<<" ";

    // cout<<endl;



    string conStr;
    for(int i=0;i<v.size();i++){
        conStr += v[i];
    }

    cout<< solve(conStr)<<endl;

    return 0;
}
