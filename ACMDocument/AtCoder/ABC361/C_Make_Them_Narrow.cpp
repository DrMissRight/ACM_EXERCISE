#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using LLL = __int128;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;



void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++ i) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = inf;
    for(int i = 1; i <= k + 1; ++ i) {
        ans = min(ans, a[i + n - k - 1] - a[i]);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}