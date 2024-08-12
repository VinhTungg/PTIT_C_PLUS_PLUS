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

void sieve(int l, int r){
    int L = min(l, r);
    int R = max(l, r);
    vector<bool> nt(R - L + 1, 1);
    for(ll i = 2; i <= sqrt(R); ++i){
        for(ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i){
            nt[j - L] = 0;
        }
    }
    for(ll i = max(2, L); i <= R; i++){
        if(nt[i - L]) cout << i << ' ';
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
    	int l, r;
        cin >> l >> r;
        sieve(l, r);
        cout << endl;
	}
}