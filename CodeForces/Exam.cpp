// Question link: https://codeforces.com/problemset/problem/732/D

#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int days[], int exams[], int n, int m){
    vector<int> rightMostDay(mid+1, -1);
    int count = 0;
    bool isTaken[m+1] = {0};
    for (int i = mid; i >= 0; i--){
        if(days[i] == 0)
            continue;
        if(rightMostDay[i] == -1 and isTaken[days[i]] == false){
            rightMostDay[i] = days[i];
            isTaken[days[i]] = true;
            count++;
        }
    }

    if(count < m)
        return false;

    int prepDays = 0;

    for (int i = 0; i <= mid; ++i){
        if(rightMostDay[i] < 0)
            prepDays++;
        else{
            if(exams[rightMostDay[i]-1] > prepDays)
                return false;
            else
                prepDays -= exams[rightMostDay[i]-1];
        }
    }
    return true;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int days[n], exams[m];
        for (int i = 0; i < n; ++i)
        {
            cin>>days[i];
        }

        for (int i = 0; i < m; ++i)
        {
            cin>>exams[i];
        }

        int l = 0, r = n-1, mid, ans = -1;
        while(l <= r){
            mid = (l+r)/2;
            if(check(mid, days, exams, n, m)){
                ans = mid+1;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans;
    }
    return 0;
}