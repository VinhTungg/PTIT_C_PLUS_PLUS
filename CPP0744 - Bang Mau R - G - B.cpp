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
ll GT[30] = {};

void init(){
    GT[0] = 1;
    for(int i = 1; i <= 30; ++i){
        GT[i] = GT[i - 1] * i;
    }
}

int main() {
    int t;
    cin >> t;
    init();
    while (t--) {
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        ll ans = 0;
        int rest = n - r - b - g;
        for(int i = 0; i <= rest; ++i){
            for(int j = 0; j <= rest - i; ++j){
                int z = rest - i - j;
                ans = ans + GT[n] / (GT[i + r] * GT[j + b] * GT[z + g]);
            }
        }
        cout << ans << endl;
    }
}
