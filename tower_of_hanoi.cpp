#include <iostream>
#include <vector>
using namespace std;

void move(long long n, vector<vector<long long>>& moves, int source, int destination, int auxi) {
    if (n == 1) {
        moves.push_back({source, destination});
        return;
    }
    move(n - 1, moves, source, auxi, destination);
    moves.push_back({source, destination});
    move(n - 1, moves, auxi, destination, source);
}

void tower(long long n) {
    vector<vector<long long>> moves;
    int source = 1;
    int destination = 3;
    int auxi = 2;
    move(n, moves, source, destination, auxi);

    cout << moves.size() << endl;
    for (auto move : moves) {
        cout << move[0] << " " << move[1] << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    tower(n);
    return 0;
}
