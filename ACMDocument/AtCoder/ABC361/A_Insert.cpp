#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;

const int N = 110;
vector<int> a(N);

void solve(){
    int n, k, x; cin >> n >> k >> x;
    for(int i = 1; i <= n; ++ i) cin >> a[i];
    for(int i = 1; i <= n; ++ i) {
        if(i == k) {
            a.insert(a.begin() + k + 1, x);
        }
    }
    for(int i = 1; i <= n + 1; ++ i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}