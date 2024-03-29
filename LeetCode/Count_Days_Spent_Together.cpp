// Question link: https://leetcode.com/contest/biweekly-contest-87/problems/count-days-spent-together/

#include<bits/stdc++.h>
using namespace std;

//to extract the count of days before month number given
int days_convert(int month){
    vector<int> a{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count=0;
    //we won't include the given month number days because its not complete yet.
    for(int i=0;i<=(month-1-1);i++) count+= a[i];
    return count;
}

int countDaysTogether(string a, string la, string b, string lb) {
    //Step A:  Get the integer count of day according to 365 numbering 
   
    int alice_arrive_day_count= days_convert((a[0]-'0')*10+(a[1]-'0')) + (a[3]-'0')*10+(a[4]-'0');
    int alice_end_day_count   = days_convert((la[0]-'0')*10+(la[1]-'0')) + (la[3]-'0')*10+(la[4]-'0');
    int bob_arrive_day_count  = days_convert((b[0]-'0')*10+(b[1]-'0') ) + (b[3]-'0')*10+(b[4]-'0');
    int bob_end_day_count     = days_convert((lb[0]-'0')*10+(lb[1]-'0')) + (lb[3]-'0')*10+(lb[4]-'0');
    
    
    //Step B : Line Sweep Technique
    int cnt[370]{};
	
    //Mark Boundaries
    cnt[alice_arrive_day_count]++;
    cnt[alice_end_day_count+1]--;
    cnt[bob_arrive_day_count]++;
    cnt[bob_end_day_count+1]--;

    for (int i = 0; i <= 370; i++){
        cout << cnt[i] << " " << i << endl;
    }

        // Take prefix and count days with overlapping count of 2
        int days = 0, sum = 0;
    for(int i:cnt){
        sum+= i;
        //found a count of 2 means , a day where both have their days common
        if(sum==2) days++;
    }
    return days;
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

    string a, la, b, lb;
    cin >> a >> la >> b >> lb;

    cout<<countDaysTogether(a, la, b, lb);
}
    return 0;
}