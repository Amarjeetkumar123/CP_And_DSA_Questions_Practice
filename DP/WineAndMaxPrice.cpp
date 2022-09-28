#include<iostream>
using namespace std;

int MaxPrice(int*wine , int day , int l , int r , int arr[100][100]){

        // base case
        if(l>r)
        return arr[l][r] = 0;

        if(arr[l][r] != 0){
            return arr[l][r];
        }
        // recursive case
        int p1 = wine[l] * day + MaxPrice(wine , day+1 , l+1 , r , arr);

        int p2 = wine[r] * day + MaxPrice(wine , day+1 , l , r-1 , arr);

        return max(p1,p2);
}

// bottom up


int main(){

    int wine[] = {2,3,5,1,4};
    int n = sizeof(wine)/sizeof(int);

    int arr[100][100] = {0};
    
    cout<<endl;
    cout<<MaxPrice(wine , 1 , 0 , n-1 , arr)<<endl;
    cout<<endl;

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}