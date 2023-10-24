#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define For(_i,_a,_b) for(int _i = (_a); _i <= (_b); _i++)
#define Ford(_i, _a, _b) for (int _i = (_a); _i >= (_b); _i--)
#define Fore(it,x) for(auto it = x.begin(); it != x.end(); ++it)

using namespace std;

using vb = vector<bool>;
using vvb = vector<vb>;
using vc = vector<char>;
using vvc = vector<vc>;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vii = vector<pii>;

//*** START CODING ***//

const int oo = 1e18, mod = 1e9 + 7;
const int ms = 2e5 + 5;
int n;
int a[ms];


void solve() {
    cin >> n;
    For(i, 1, n) cin >> a[i];
    sort(a + 1, a + n + 1);
    int mid = a[n / 2 + 1];
    int cnt = 0;
    For(i, 1, n) {
        cnt += abs(a[i] - mid);
    }
    cout << cnt << '\n';


}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}