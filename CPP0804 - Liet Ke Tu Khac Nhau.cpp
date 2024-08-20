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
    freopen("VANBAN.in", "r", stdin);
    boost;
    int t = 1; 
    //cin >> t;
    while(t--){
        set<string> s;
        string x;
        while(cin >> x){
            transform(all(x), x.begin(), ::tolower);
            s.insert(x);
        }
        for(auto &x : s) cout << x << endl;
    }
}