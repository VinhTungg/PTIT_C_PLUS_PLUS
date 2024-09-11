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
const ll Max = 10000000;
vector<int> primes;

void sieve() {
    vector<bool> is_prime(Max + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= Max; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= Max; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve(ll n){
    ll cnt;
    for (int i : primes) {
        if (i * i > n) break;
        while (n % i == 0) {
            cnt = i;
            n /= i;
        }
    }
    if (n > 1) {
        cnt = n;
    }
    cout << cnt;
}

int main(){
    boost;
    sieve();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}