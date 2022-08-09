// Question link : https://codeforces.com/problemset/problem/275/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    int matrix[3][3];
    int ans[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
            ans[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){

            if(matrix[i][j] % 2 == 0)
            continue;

                ans[i][j] = !ans[i][j];
    
                // up
                if(i-1 >= 0)
                    ans[i - 1][j] = !ans[i - 1][j];
                
                // left
                if(j-1 >= 0)
                    ans[i][j - 1] = !ans[i][j - 1];
                
                // down
                if(i+1 < 3)
                    ans[i + 1][j] = !ans[i + 1][j];

                // right
                if(j+1 < 3)
                    ans[i][j + 1] = !ans[i][j + 1];
            
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){

            cout<<ans[i][j];
        }
        cout << endl;
    }

        return 0;
}