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
const int maxn = 400 + 5;
inline void solve(){

    c(t);
    while(t--){
        string str;
        cin>>str;
        int res[maxn];
        ff(0,maxn,i){
            res[i] = 0;
        }
        int vis[27];
        ff(0,27,i){
            vis[i] = 0;
        }
        int pos = 200;
        bool valid = true;
        res[pos]=(str[0]-'a'+1);
        vis[(str[0]-'a')+1] = 1;
        // bool mov_f=true;
        ff(1,str.size(),i){
            int cur_ch = str[i]-'a'+1;
       
            if(vis[cur_ch]){
                
                if((res[pos-1]!=cur_ch) && (res[pos+1]!=cur_ch)){

                    valid = false;
                    break;
                }
                else if(res[pos-1]==cur_ch){
                    pos = pos-1;
                }
                else{
                    pos = pos+1;
                }
            }
            else if(!vis[res[pos-1]]||!vis[res[pos+1]]){
    
                vis[cur_ch] = 1;
                if(!vis[res[pos+1]]){
                    pos++;
                }
                    
                else
                {
                    pos--;
                }
                res[pos] = cur_ch;
                // cout << pos <<endl;
            }
            else{
                valid = false;
                break;
            }
        }
        if(!valid){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
            int pri[27];
            ff(0,27,i){
                pri[i] = 0;
            }
            ff(0,maxn,i){
                if(res[i]){
                    cout << char('a'+res[i]-1);
                    pri[res[i]-1] = 1;
                }
            }
            ff(0,26,i){
                if(!pri[i]){
                    cout <<char('a'+i);
                }
            }
            cout <<endl;
        }
    }
}

int main() {
    // #define intxt
    #ifdef intxt
        freopen("in.txt","r",stdin);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}