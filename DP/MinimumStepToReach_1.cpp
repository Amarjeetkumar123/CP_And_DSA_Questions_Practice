#include <iostream>
#include<climits>
#include<cstring>
using namespace std;


// int minimumStep(int n){
    
//     // base case
//     if(n==1)
//     return 0;

//     // recursive case

//     int opt1 = INT_MAX;
//     int opt2 = INT_MAX;
//     int opt3 = INT_MAX;

//     opt1 = minimumStep(n-1);

//     if(n%2 == 0)
//     opt2 = minimumStep(n/2);

//     if(n%3 == 0)
//     opt3 = minimumStep(n/3);

//     return min(opt1, min(opt2,opt3))+1;

    
// }

int minimumStepTD(int n , int *arr){
    
    // base case
    if(n==1)
    return arr[n] = 0;

    // recursive case
    if(arr[n] != -1)
    return arr[n];

    int opt1 = INT_MAX;
    int opt2 = INT_MAX;
    int opt3 = INT_MAX;

    opt1 = minimumStepTD(n-1 , arr);

    if(n%2 == 0)
    opt2 = minimumStepTD(n/2 , arr);

    if(n%3 == 0)
    opt3 = minimumStepTD(n/3 , arr);

    return arr[n] = min(opt1, min(opt2,opt3))+1;
 
}

int minimumStepBU(int n){
    int *arr = new int[n+1];
    arr[1] = 0;

    for(int i=2;i<=n;i++){

    int opt1 = INT_MAX;
    int opt2 = INT_MAX;
    int opt3 = INT_MAX;

    opt1 = arr[i-1];

    if(i%2==0)
    opt2 = arr[i/2];

    if(i%3 == 0)
    opt3 = arr[i/3];

    arr[i] = min(opt1,min(opt2,opt3))+1;

    }

    return arr[n];
}


int main() {
    
    int n;
    cin>>n;

    // int *arr = new int[n+1];

    // for(int i=0;i<=n;i++){
    //     arr[i] = -1;
    // }

    // cout<<minimumStep(n);

    // DP solution TopDown Approach
    // cout<<minimumStepTD(n , arr);

    // Bottom Up solution
    cout<<minimumStepBU(n);

  return 0;
}
