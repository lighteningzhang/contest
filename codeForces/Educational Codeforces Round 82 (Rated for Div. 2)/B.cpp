#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define col(n) cout << n <<endl
#define sz(x) int((x).size())
#define c(n) int n;cin >> n
#define ff(a,b,i) for (int (i) = a; (i) < (b); ++(i))
#define FF(a,b,i) for(int (i) = (a); (i) <= (b); ++(i))
#define ROF(a,b,i) for(int (i) = (a); (i) >= (b); --(i))
#define rof(a,b,i) for(int (i) = (a); (i) > (b); --(i))
#define vi vector<int>
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define pii pair<int,int>
#define MOD 1000000007

const int inf = 0x3f3f3f3f;
const int maxn = 1e9 + 5;
inline void solve(){
    c(t);
    while(t--){
        ll ans = 0;
        ll n,g,b;
        cin >> n >> g>>b;
     
        if(g>=(n+1)/2){
            ans = n;
        }
        else{
            ll half=(n+1)/2;
            ll re = half/g;
            ll remain = half-re*g;
            if(remain>0)
                ans = (re)*(g)+(re)*b+remain;
            else
                ans = re*g+(re-1)*b;
            if(ans<n)
                ans = n;
        }
        cout << ans <<endl;
    }
}

int main() {
    #ifdef intxt
        freopen("in.txt","r",stdin);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}