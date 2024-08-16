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
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        for(auto &num : v) cin >> num;
        sort(all(v));
        int check = -1;
        foru(i, 0, n - 1){
            if(binary_search(v.begin(), v.end(), k + v[i])) check = 1;
        }
        cout << check << endl;
    }
}