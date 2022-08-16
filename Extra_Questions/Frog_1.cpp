// Question Link: https://atcoder.jp/contests/dp/tasks/dp_a

#include<iostream>
#include<climits>
using namespace std;
int solve(int *arr , int n, int *dp){
 	// base case
  	if(n<=0)
      return 0;
  
  if(dp[n] != -1)
    return dp[n];
  
  // recursive case
  
  int option1 = INT_MAX , option2 = INT_MAX;
  
  if(n-1 >= 0){
   	option1 = solve(arr,n-1,dp)+abs(arr[n]-arr[n-1]); 
  }
  
  if(n-2 >= 0){
   option2 = solve(arr,n-2,dp)+abs(arr[n]-arr[n-2]); 
  }
  
  return dp[n] = min(option1 , option2);
  
}
int main(){
  
  int n;
  cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++){
   	cin>>arr[i]; 
  }
 	int dp[n+1];
  	for(int i=0;i<=n;i++)
      dp[i]=-1;
  
  cout<<solve(arr,n-1,dp);
}