#include <bits/stdc++.h>
#define int long long

using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(a) (int)(a).size()
#define el '\n'
#define F first
#define S second
#define For(i, a, b) for (int i = a; i <= (int)b; i++)
#define Ford(i, a, b) for (int i = a; i >= (int)b; i--)
#define Fore(it, x) for (auto it = x.begin(); it != x.end(); ++it)

using vb = vector<bool>;
using vvb = vector<vb>;
using vc = vector<char>;
using vvc = vector<vc>;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vii = vector<pii>;

//*** START CODING ***//

const int oo = 2e18, mod = 1e9 + 7;
const int ms = 5e5 + 5;
int n, c;
int a[ms];

void solve() {
    cin >> n >> c;
    vi f(ms, 0);  // count number of a[i]
    for (int i = 1; i <= n; i++) cin >> a[i];

    int cnt = 0, mx = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == c)
            cnt++;
        else
            f[a[i]] = max(cnt, f[a[i]]) + 1;

        mx = max(mx, f[a[i]] - cnt);
    }

    cout << mx + cnt << el;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs = 1;
    // cin >> tcs;
    while (tcs--) {
        solve();
    }
    return 0;
}