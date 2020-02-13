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
const int maxn = 100 + 5;
inline void solve(){
    c(t);
    while(t--){
        string str;
        cin >> str;
        int res = 0,tmp=0;
        bool flag=false,first=true;
        ff(0,str.size(),i){
            if(str[i]=='1'){
                first = false;
                if(!flag){
                    res+=tmp;
                    tmp = 0;
                    flag=true;
                }
                continue;
            }
            else{
                flag = false;
                if(!first)
                    tmp++;
            }
            
        }
        col(res);
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