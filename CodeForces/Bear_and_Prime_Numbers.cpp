// Question link: https://codeforces.com/problemset/problem/385/C

#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t prime[(int)1e7 + 10];
int32_t element[(int)1e7 + 10];

vector<int32_t> primes;
int pval = 1;
int32_t counter[(int)7e5 + 10];

void sieve(){

    primes.push_back(2);

    for (int i = 3; i <= 1e7; i += 2){

        if(prime[i] == 0){
            primes.push_back(i);
            ++pval;

            for (int j = i; j <= 1e7; j += i){
                prime[j] = 1;
                if(element[j] > 0){
                    counter[pval] += element[j];
                }
            }
        }
    }
}

int32_t main(){

    int n;
    cin >> n;
    int x;

    for (int i = 0; i < n; i++){
        cin >> x;
        if(x%2 == 0){
            counter[1]++;
        }
        element[x]++;
    }

    sieve();

    for (int i = 1; i <= pval + 1; i++){
        counter[i] += counter[i - 1];
    }

    primes.push_back(2e9 + 1);
    int m;
    cin >> m;

    while(m--){

        int l, r;
        cin >> l >> r;

        int end_i = upper_bound(primes.begin(), primes.end(), r) - primes.begin();

        int st_i = lower_bound(primes.begin(), primes.end(), 1) - primes.begin();

        cout << counter[end_i] - counter[st_i] << "\n";
    }

    return 0;
}