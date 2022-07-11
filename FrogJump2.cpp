/*
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&heights , int k , int index , vector<int>&dp){
    // base case
    if(index ==  0)
    return 0;

    // recursive case

    // calculate karne se phle check
    if(dp[index] != -1)
    return dp[index];

    int minSteps = INT_MAX;

    for(int j=1;j<=k;j++){
        if(index-j >= 0){

            int jump = solve(heights , k , index-j , dp) + abs(heights[index]-heights[index-j]);
            minSteps = min(minSteps,jump);

        }   
    }

    // return krne se phle store
    return dp[index] = minSteps;
}

int main(){

    vector<int>heights;
    int  n , data , k;

    cin>>n >> k;     // size of array and number of jumps

    for(int i=0;i<n;i++){
        cin>>data;
        heights.push_back(data);
    }

    vector<int>dp(heights.size()+1 , -1);

    cout<<solve(heights , k , heights.size()-1 , dp);

    return 0;
}

*/

//--------------------------------------------------------------------------------------

// Tabulation Approach

#include <bits/stdc++.h>

using namespace std;

int solveUtil(int n, vector<int>& height, vector<int>& dp, int k){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mmSteps = INT_MAX;
        
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump = dp[i-j]+ abs(height[i]- height[i-j]);
                mmSteps= min(jump, mmSteps);
            }
        }
        dp[i]= mmSteps;
    }
    return dp[n-1];
}

int solve(int n, vector<int>& height , int k){
    vector<int> dp(n,-1);
    return solveUtil(n, height, dp, k);
}

int main() {

 vector<int>height;
    int  n , data , k;

    cin>>n >> k;     // size of array and number of jumps

    for(int i=0;i<n;i++){
        cin>>data;
        height.push_back(data);
    }

    vector<int>dp(height.size()+1 , -1);

    cout<<solve(n,height,k);
}