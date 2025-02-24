#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>> n;
    vector<long long> nums;
    long long sum = 0;
    for(int i=0; i<n-1; i++){
        long long m;
        cin>> m;
        nums.push_back(m);
        sum += m;
    }
    long long expected_sum = (n+1)*(n+2)/2;
    cout<<(expected_sum-sum)<< endl;
    
    return 0;
}