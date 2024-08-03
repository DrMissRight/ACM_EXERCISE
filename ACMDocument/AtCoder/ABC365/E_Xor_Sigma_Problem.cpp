#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using LLL = __int128;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;

LL getsum(int n, vector<int> a) {
    vector<int> p(n + 1, 0);
    for(int i = 1; i <= n; ++ i) p[i] = p[i - 1] ^ a[i - 1];
    LL sum = 0;
    for(int i = 1; i <= n; ++ i) {
        for(int j = i + 1; j <= n; ++ j) {
            int num = p[j] ^ p[i - 1];
            sum += num;
        }
    }
    return sum;
}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++ i) cin >> a[i];
    cout << getsum(n, a) << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}