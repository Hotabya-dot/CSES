#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    while (n--) {
        long long y, x;
        cin >> y >> x;

        long long maxVal = max(x, y);
        long long maxSquare = maxVal * maxVal; 
        long long minSquare = (maxVal - 1) * (maxVal - 1) + 1; 
        
        if (maxVal % 2 == 0) {
            if (y == maxVal) {
                cout << maxSquare - (x - 1) << endl;
            } else {
                cout << minSquare + (y - 1) << endl;
            }
        } else {
            if (x == maxVal) {
                cout << maxSquare - (y - 1) << endl;
            } else {
                cout << minSquare + (x - 1) << endl;
            }
        }
    }

    return 0;
}
