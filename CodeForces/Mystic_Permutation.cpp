// Question link: https://codeforces.com/problemset/problem/1689/B

// #include<bits/stdc++.h>
// using namespace std;

// int main(void){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);

// int t = 1;
// //cin>>t;

// while(t--){

//     int n;
// 		cin >> n;
// 		int nextlessposs = 1, nextBigPoss = 2;
// 		int arr[n];
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin >> arr[i];
// 		}
// 		int ans[n] = {0};
// 		for (int i = 0; i < n; ++i)
// 		{
// 			if (arr[i] != nextlessposs)
// 			{
// 				ans[i] = nextlessposs;
// 				nextlessposs = nextBigPoss;
// 				if (nextBigPoss < n)
// 					nextBigPoss++;
// 			}
// 			else
// 			{
// 				ans[i] = nextBigPoss++;
// 				if (ans[i] == arr[i])
// 				{
// 					swap(ans[i], ans[i - 1]);
// 				}
// 			}
// 		}
 
// 		for (int i = 0; n != 1 and  i < n; ++i)
// 		{
// 			cout << ans[i] << " ";
// 		}
// 		if (n == 1)
// 			cout << -1 << endl;
 
// 		cout << endl;
 
// 	}
 
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int> nums;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      nums.push_back(x);
   }

   vector<int> ans=nums;
   sort(ans.begin(),ans.end());
   for(int i=0;i<n;i++)
   {
      if(nums[i]!=ans[i])
		  continue;
	  if(i+1<n)
      {
		  swap(ans[i], ans[i + 1]);
	  }
      else if(i-1>0)
      {
		  swap(ans[i], ans[i - 1]);
	  }
      else
      {
         cout<<-1<<endl;
         return ;
      }
   }

   for(auto it : ans)
      cout<<it<<" ";
   cout<<endl;
   return ;
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin>>t;

while(t--){

	solve();
}
	return 0;
}