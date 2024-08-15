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
int f[10005];
int calc(int n){
    int ans = 0;
    foru(i, 2, sqrt(n)){
        if(n % i == 0){
            ans = i;
            return ans;
        }
    }
    if(!ans) ans = n;
    return ans;
}

void init(){
    foru(i, 1, 10000) f[i] = calc(i);
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    init();
    while(t--){
        int n; cin >> n;
        foru(i, 1, n) cout << f[i] << ' ';
        cout << endl;
    }
}