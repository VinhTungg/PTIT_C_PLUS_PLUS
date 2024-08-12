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

void Solve(string Num, set<int> &s){
    for(char &c : Num) s.insert(c - '0');
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> Nums(n);
        for(auto &Num : Nums) cin >> Num;
        set<int> s;
        for(auto &Num : Nums){
            Solve(to_string(Num), s);
        }
        for(auto it = s.begin(); it != s.end(); ++it) cout << *it << ' ';
        cout << endl;
    }
}