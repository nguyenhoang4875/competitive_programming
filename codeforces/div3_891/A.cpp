#include <bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;

using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;

//*** START CODING ***//

int tcs, n;
int a[55];

void solve() {
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n ; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2 == 0 && n  >= 2) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> tcs;
    while (tcs--) {
        solve();
    }
    return 0;
}