// Question Link: https://codeforces.com/problemset/problem/279/B

#include<bits/stdc++.h>
using namespace std;
int main(){

    int size , time;
    cin>>size >> time;

    vector<int>arr(size);

    for(auto &i : arr) 
        cin>>i;

        int l=0, r=0, c=0, sum=0 , ans=0;

        while(l < size){
            
            if(r < size && sum + arr[r] <= time){
                sum += arr[r];
                c++;
                r++;
                ans = max(ans , c);
            }
            else{
                sum -= arr[l];
                l++;
                c--;
            }
        }

        cout<<ans<<endl;
    
    return 0;
}