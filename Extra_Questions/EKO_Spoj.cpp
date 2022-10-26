#include<iostream>
#include<algorithm>
#define int long long
using namespace std;

bool isPossible(int *arr , int mid , int k, int n){

	int sum = 0;
	for(int i=0;i<n;i++){
		if(arr[i] > mid){
			sum += arr[i]-mid;
		}
	}

	if(sum >= k){
		return true;
	}
	else{
		return false;
	}
}

int32_t main(){

	int n , k;

	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int MaxEle = *max_element(arr,arr+n);
	int s = 0;
	int e = MaxEle;
	int ans = -1;

	int mid = s+(e-s)/2;

	while(s <= e){

		if(isPossible(arr,mid,k,n)){
			ans = mid;
			s = mid+1;
		}else{
			e = mid-1;
		}

		mid = s+(e-s)/2;
	}

	cout<<ans<<endl;

	return 0;
}