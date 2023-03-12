#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define X first
#define Y second
#define vi vector<ll>
#define int ll
 
using namespace std;
 
 
 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
template<typename T>
std::istream& operator>>(std::istream &in, std::vector<T> &a) {
    for (T &x : a) {
        in >> x;
    }
    return in;
}
 
template<typename T>
std::ostream& operator<<(std::ostream &out, std::vector<T> &a) {
    for (T &x : a) {
        out << x << ' ';
    }
    return out;
}
 
template<typename T>
std::ostream& operator<<(std::ostream &out, std::pair<T, T> &a) {
    cout << "( " << a.first <<", " << a.second << ")";
}
 
 
template<typename T>
std :: ostream & operator << (std :: ostream &out, set <T> &st){
 
    for(auto &x : st){
        cout << x <<' ';
    }
    return out;
}
 
 
 
 
const ll INF = 1e18, SIZE = 1e6;
const ld EPS = 1e-8;
const std::string yes = "YES\n", no = "NO\n";
 
 
vector<vector<ll>> v(SIZE);
vector<bool> used(SIZE);
vector<ll>  dp(SIZE, 0), sz(SIZE, 0);
vector<ll> global_a;
 
 
ll func(vector<ll> &one, pair<ll,ll> pr, ll sz = 1){
 
 
 
    ll tmp = one[pr.second] - one[pr.first - 1];
 
    return max(tmp, 0LL);
}
 
 
 
void solve(){
 
    ll n;
    cin >> n;
    vector<ll> a(n);
    cin >> a;
 
    ll l = 0;
    ll sz = 0;
    vector<ll> ans;
    for(ll i = 0; i < n; i++){
        sz++;
 
        while(a[l] < sz){
            l++;
            sz--;
        }
 
        ans.push_back(sz);
    }
 
    cout << ans << "\n";
}
 
 
 
 
 
signed main(){
 
   //freopen ("control.in","r",stdin);
   //freopen ("control.out","w",stdout);
 
   fast();
   ll T = 2;
   cin >> T;
    while(T--){
        solve();
    }
 
}
 
 
/*
 
4 4
+-+ +-+
| |   |
+ +-+-+
|   |
+-+-+-+
|     |
+-+-+-+
    */
 
 
/*
10 3
1 5
5 8
7 10
 
*/