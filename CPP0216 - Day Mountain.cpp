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

bool check(int l, int r, int v[]){
    int idx = l;
    foru(i, l, r - 1){
        if(v[i] > v[i + 1]){
            idx = i;
            break;
        }
    }
    foru(i, idx, r - 1){
        if(v[i] < v[i + 1]) return false;
    }
    return true;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int v[n + 1];
        foru(i, 0, n - 1) cin >> v[i];
        int l, r; cin >> l >> r;
        if(check(l, r, v)) puts("Yes");
        else puts("No");
    }
}