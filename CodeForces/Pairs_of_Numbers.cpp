// Question link: https://codeforces.com/problemset/problem/134/B

#include<bits/stdc++.h>
using namespace std;
int ans = INT_MAX;
void Function(int a , int b , int count){
    
    if(a <= 0 || b <= 0)
        return;
        
    if(a==1 && b==1)
        ans = min(ans, count);

        Function(a - b, b, count + 1);
    

        Function(a, b - a, count + 1);

}

void Pair(int n){

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    //What all are the combintions that can form n:
    for (int x = 1; x < n; x++){
        Function(x, n - x, 1);
    }
    cout << ans;
}

int main(){

    int n;
    cin >> n;

    Pair(n);

    return 0;
}