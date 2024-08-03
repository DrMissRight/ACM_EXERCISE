#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using LLL = __int128;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;


void solve(){
    int n; cin >> n;
    vector<int> a(n + 1);
    int mx1 = -inf, mx2 = -inf;
    for(int i = 1; i <= n; ++ i) {
        cin >> a[i];
        mx1 = max(a[i], mx1);
    }
    int idx = 0;
    for(int i = 1; i <= n; ++ i) {
        if(a[i] < mx1) {
            mx2 = max(a[i], mx2);
        }
    }
    for(int i = 1; i <= n; ++ i) {
        if(a[i] == mx2) idx = i;
    }
    cout << idx << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}