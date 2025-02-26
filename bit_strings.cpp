#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long powerMod(long long base, long long exp, long long mod){
    long long result = 1;
    while(exp > 0){
        if(exp%2 == 1){
            result = (result * base) % mod;
        }
        base  = (base * base ) % mod;
        exp /= 2;
    }
    return result;
}
 
int main()
{
    long long n;
    cin>> n;
    cout<< powerMod(2, n, MOD)<<endl;
    return 0;
}