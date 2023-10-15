#include <bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
/**
 * Problem: https://www.spoj.com/problems/PT07X/
 * Solution: DP on Tree
 * 
 * dp[cur][0] -> vertex cover if current node is not in the set of the subset
 * dp[cur][1] -> vertex cover if current node is chosen in the set of the subset
 * 
*/

using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;

//*** START CODING ***//
const int MS = 1e5 + 5;
vi g[MS];
int n;
int dp[MS][2];

void dfs(int cur, int par) {
    dp[cur][0] = 0;
    dp[cur][1] = 1;

    for(int x: g[cur]) {
        if(x != par) {
            dfs(x, cur);
            // coming back from dfs
            // dp[x] will be fill;

            dp[cur][0] += dp[x][1];
            dp[cur][1] += min(dp[x][0], dp[x][1]);
        }
    }


}


void solve() {
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    dfs(1, 0);

    cout << min(dp[1][0], dp[1][1]);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}