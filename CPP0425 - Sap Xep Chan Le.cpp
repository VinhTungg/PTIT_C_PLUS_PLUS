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

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int v[n + 5];
        foru(i, 1, n) cin >> v[i];
        sort(v + 1, v + n + 1);
        int half = n / 2;
        foru(i, 1, half){
            cout << v[i] << ' ';
            cout << v[i + half + (n & 1)] << ' ';
        }
        if(n & 1) cout << v[n / 2 + 1];
        cout << endl;
    }
}