#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
typedef pair<LL, LL> PII;
const int inf = 0x3f3f3f3f;


void solve(){
    int x1, y1, z1, x2, y2, z2; cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    int x3, y3, z3, x4, y4, z4; cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
    if(x2 <= x3 || x1 >= x4) cout << "No" << '\n';
    else if(y2 <= y3 || y1 >= y4) cout << "No" << '\n';
    else if(z2 <= z3 || z1 >= z4) cout << "No" << '\n';
    else cout << "Yes" << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --) solve();
    return 0;
}