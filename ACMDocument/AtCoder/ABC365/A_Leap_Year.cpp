#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using LLL = __int128;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;


void solve(){
    int n; cin >> n;
    if(n % 4 != 0) cout << 365 << '\n';
    else if(n % 4 == 0 && n % 100 != 0) cout << 366 << '\n';
    else if(n % 100 == 0 && n % 400 != 0) cout << 365 << '\n';
    else cout << 366 << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}