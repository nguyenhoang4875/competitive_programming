#include <bits/stdc++.h>
#define int long long

using namespace std;

int n;

void towerOfHanoi(int n, char from, char helper, char to) {
    if(n == 0) return;
    towerOfHanoi(n - 1, from, to, helper);
    // reached here
    // nth rod move to "to"
    cout <<  from << " " << to << endl;
    towerOfHanoi(n - 1, helper, from, to);

}

void solve() {
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    towerOfHanoi(n, '1', '2', '3');

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}