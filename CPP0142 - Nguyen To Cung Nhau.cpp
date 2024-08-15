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
vector<bool> nt(1000006, true);

void sieve(){
    nt[0] = nt[1] = false;
    foru(i, 1, 1000){
        if(nt[i]){
            for(int j = 2 * i; j <= 1000000; ++j) nt[j] = false;
        }
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    sieve();
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        foru(i, 1, n){
            if(__gcd(i, n) == 1) ++cnt;
        }
        cout << ((nt[cnt] == true) ? "1\n" : "0\n");
    }
}