// // Question link: https://codeforces.com/problemset/problem/676/C

// #include<bits/stdc++.h>
// using namespace std;

//     int n, k;
//     string str;

// int MaxCountCheck(char ch){

//     int l = 0;
//     int r = 0;
//     int ans = 0 , interchange = 0;

//     while(l < n && r < n){

//     while(r < n && (str[r] == ch || interchange < k) ){

//         if(str[r] != ch){
//             interchange++;
//         }
//         r++;
//     }

//     ans = max(ans, r - l);

//     while(str[l] == ch){
//         l++;
//     }
//         l++;
//         interchange--;

//     }
//     return ans;
// }


// int main(void){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);

// int t = 1;
// //cin>>t;

// while(t--){

//     cin >> n >> k;
//     cin >> str;

//     int res = 0;

//     res = max(MaxCountCheck('a'), MaxCountCheck('b'));

//     cout << res << endl;
// }
//     return 0;
// }



// Another Solution

#include<bits/stdc++.h>
using namespace std;

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    int n, k;
    cin >> n >> k;

    string c;
    cin >> c;

    int s = 0, r = 0, cnta = 0, cntb = 0 , sum = 0;
    while(r < n){
		if(c[r]=='a')	cnta++;
		else	cntb++;
		if(cnta<=k || cntb<=k){
			sum++;
			r++;
		}
		else{
			if(c[s]=='a')	cnta--;
			else	cntb--;
			s++;                                      
			r++;
		}
	}
    cout << sum << endl;
}
    return 0;
}