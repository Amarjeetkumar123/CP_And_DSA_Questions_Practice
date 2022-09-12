// Question link: https://codeforces.com/contest/1133/problem/C

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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Take two pointer i , j
    int i = 0, j = 1 , len = 1 , maxLen = 1;

    // sort array
    sort(arr, arr + n);
    
    while(i < n && j < n){

        if(arr[j] - arr[i] <= 5){
            len++;
            maxLen = max(maxLen, len);
            j++;
        }
        else{
            len--;
            i++;
        }
    }

    cout << maxLen <<endl;
}
    return 0;
}