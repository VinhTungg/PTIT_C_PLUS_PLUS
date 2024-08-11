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
vector<bool> nt(1000005, true);

void sieve(){
    foru(i, 2, 1e3) if(nt[i]) for(int j = i * i; j <= 1e6; j += i) nt[j] = false;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    sieve();
    while(t--){
        int n; cin >> n;
        foru(i, 2, n/2) if(nt[i] && nt[n - i]){
            cout << i << ' ' << n - i << endl;
            break;
        }
    }
}