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
const int ms = 1e2 + 5;
int n, k, a, b;
int s[ms];

int getCost(int l) {
    if (l == 1) return 0;
    return a * (l - 1) * (l - 1) + b;
}

void solve() {
    cin >> n >> k >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    // dp[i][j] minimum cost to get i sticks length 1 use first j sticks
    vvi dp(10005, vi(105, oo));

    // base case
    dp[0][0] = 0;
    for (int i = 0; i <= 10000; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[i][j - 1];
            if (i >= s[j]) {
                dp[i][j] = min(dp[i][j], dp[i - s[j]][j - 1] + getCost(s[j]));
            }
        }
    }
    int ans = oo;
    for (int i = k; i <= 10000; i++) {
        ans = min(ans, dp[i][n]);
    }
    cout << ans << el;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs = 1;
    cin >> tcs;
    while (tcs--) {
        solve();
    }
    return 0;
}