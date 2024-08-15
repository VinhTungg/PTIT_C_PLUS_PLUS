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
ll F[93];

void init(){
    F[1] = 1;
    foru(i, 2, 92) F[i] = F[i - 1] + F[i - 2];
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    init();
    while(t--){
        ll n; cin >> n;
        int check = binary_search(F, F + 93, n);
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}