// Question link: https://codeforces.com/problemset/problem/272/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    for (int i = 1; i <= 5; i++){

        if((sum+i) % (n+1) != 1)
            count++;
    }

    cout << count << endl;
    
    return 0;
}