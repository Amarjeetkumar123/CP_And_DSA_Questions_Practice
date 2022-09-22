// question link: https://www.spoj.com/problems/BUSYMAN/

#include<bits/stdc++.h>
using namespace std;

class activity {
    public:
        int starting_time;
        int ending_time;
};

activity a[100005];

bool compare(activity a , activity b){

    if(a.ending_time == b.ending_time){
        return a.starting_time < b.starting_time;
    }

    return a.ending_time < b.ending_time;
}

void solve(int n){

    sort(a, a + n, compare);

    int ans = 1;
    int prev_ending_time = a[0].ending_time;

    for (int i = 0; i < n; i++){
        if(a[i].starting_time >= prev_ending_time){
            ans++;
            prev_ending_time = a[i].ending_time;
        }
    }

    cout << ans << endl;
}


int32_t main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin>>t;

while(t--){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i].starting_time >> a[i].ending_time;
    }

    solve(n);
}
    return 0;
}