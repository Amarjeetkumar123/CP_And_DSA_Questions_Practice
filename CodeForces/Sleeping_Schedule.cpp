// Question link: https://codeforces.com/problemset/problem/1324/E

#include<bits/stdc++.h>
using namespace std;

int n, h, l, r;
int arr[100005];


int Sleeping_Schedule(int i , int walking_hour,vector<vector<int>> &dp){
    // base case
    if(i == n)
        return 0;   // that means you have already calculated your ans;

    if(dp[i][walking_hour] != -1)
        return dp[i][walking_hour];

    int option1_walking_hour = (walking_hour + arr[i])%h;
    int option2_walking_hour = (walking_hour + (arr[i]-1)) % h;

    int ans1 = 0, ans2 = 0;

    if(option1_walking_hour >= l && option1_walking_hour <= r){
        ans1 = 1;
    }

    if(option2_walking_hour >= l && option2_walking_hour <= r){
        ans2 = 1;
    }

    int opt1 = Sleeping_Schedule(i + 1, option1_walking_hour,dp) + ans1;
    int opt2 = Sleeping_Schedule(i + 1, option2_walking_hour,dp) + ans2;

    return dp[i][walking_hour] = max(opt1, opt2);
}

int main(){

    cin >> n >> h >> l >> r;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    /*	at which sleep you are currently at:
		because we want recursion to go forward and when
		your sleep has reached the as n that is the total no of
		sleep you say stop:*/

    /*
	YOu also need the walking time because without the waking
	time how are you you suppose to calculate the starting time
	of the next sleep;
	t=0: 15 hour and 16 hour
	15: wake 7 hour from here
	*/

    // Memoization
    vector<vector<int>> dp(n, vector<int>(h, -1));

    cout << Sleeping_Schedule(0, 0,dp);

    return 0;
}