#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define ford(i,a,b) for(int i = a; i >= b; --i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

int main(){
    freopen("DATA.in", "r", stdin);
    boost;
    int t = 1; 
    //cin >> t;
    while(t--){
        string s;
        ll ans = 0;
        while(cin >> s){
            ll res = 0;
            for(auto &c : s){
                if(isdigit(c)){
                    res = res * 10 + (c - '0');
                    if(res > INT_MAX) {
                        res = 0;
                        break;
                    }
                }
            }
            ans += res;
        }
        cout << ans;
    }
}