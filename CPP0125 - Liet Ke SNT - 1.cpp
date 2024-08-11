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
    int nt[r - l + 1];
    memset(nt, 1, sizeof(nt));
    nt[0] = nt[1] = 0;
    for(int i = 2; i <= sqrt(r); ++i){
        for(int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
            nt[j - l] = 0;
        }
    }
    for(int i = max(2, l); i <= r; i++){
        if(nt[i - l]) cout << i << ' ';
    }
}

int main(){
    boost;
    int t = 1;
    //cin >> t;
    while(t--){
    	int l, r;
        cin >> l >> r;
        sieve(l, r);
	}
}