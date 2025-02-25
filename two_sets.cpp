#include <bits/stdc++.h>
using namespace std;
 
void solve(long long n){
    long long sum = n*(n+1)/2;
    if(sum%2 == 1){
        cout<< "NO"<<endl;
    }
    else{
        cout<< "YES"<<endl;
        vector<long long> s1, s2;
        vector<long long> vis(n+1, 0);
        long long s1_sum = 0;
        long long max = n;
        while(s1_sum < sum/2){
            long long rem_sum = (sum/2)-s1_sum;
            if(rem_sum > max){
                s1.push_back(max);
                vis[max] = 1;
                s1_sum += max;
                max--;
            }else{
                s1.push_back(rem_sum);
                vis[rem_sum] = 1;
                s1_sum = sum/2;
            }
        }
        for(int i=1; i<=n; i++){
            if(vis[i] == 0){
                s2.push_back(i);
            }
        }
        cout<< s1.size()<<endl;
        for(auto x : s1){
            cout<< x<< " ";
        }
        cout<< endl;
        cout<< s2.size()<<endl;
        for(auto x: s2){
            cout<< x<< " ";
        }
    }
}

int main()
{
    long long n;
    cin>> n;
    solve(n);
    return 0;
}