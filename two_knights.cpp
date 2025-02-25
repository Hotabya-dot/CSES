#include <bits/stdc++.h>
using namespace std;

void solve(long long n){
    long long totalWays = (n*n)*(n*n-1)/2;
    long long attack = 4*(n-1)*(n-2);
    cout<< totalWays-attack<<endl;
}
 
int main()
{
    long long n;
    cin>> n;
    for(int i=1; i<=n; i++){
        solve(i);
    }
    return 0;
}