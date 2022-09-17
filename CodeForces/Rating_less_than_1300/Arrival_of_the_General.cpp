// Question link: https://codeforces.com/problemset/problem/144/A

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

    int arr[100];
    int min_index, max_index , max = 0 , min = 101;
    for (int i = 0; i < n; i++){
        cin >> arr[i];

        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
        if(min >= arr[i]){
            min = arr[i];
            min_index = i;
        }
    }

    cout << max_index + (n - 1 - min_index) - (min_index < max_index ? 1 : 0) << endl;
}
    return 0;
}