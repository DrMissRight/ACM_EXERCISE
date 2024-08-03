#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using LLL = __int128;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;

const int N = 2e5 + 10;
LL a[N];
LL n, m;

bool check(LL mid) {
    LL res = 0;
    for(int i = 1; i <= n; ++ i) {
        res += min(mid, a[i]);
    }
    return res <= m;
}

void solve(){
    cin >> n >> m;
    LL mx = -inf, mn = inf;
    for(int i = 1; i <= n; ++ i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    LL l = 0, r = 1e9 + 10;
    LL ans = 0;
    while(l <= r) {
        LL mid = (l + r) / 2;
        if(check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if(ans == 1e9 + 10) cout << "infinite" << '\n';
    else cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}