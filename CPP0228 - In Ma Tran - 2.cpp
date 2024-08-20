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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[4 * n + 1][4 * n + 1] = {};
        int cnt = 1;
        foru(i, 1, 4 * n) foru(j, 1, 4 * n) a[i][j] = cnt++;
        int c1 = 1, c2 = 4 * n, h1 = 1, h2 = 4 * n;
        vector<int> v1, v2;
        while(c1 < c2 && h1 < h2){
            for(int i = h1; i <= h2; ++i) v2.pb(a[i][h1]);
            ++c1; --c2;
            for(int i = c1; i <= c2; ++i) v2.pb(a[h2][i]);
            --h2; ++h1;
            if(h1 < h2){
                for(int i = h2; i >= h1; --i) v2.pb(a[i][c2]);
                ++c1; --c2;
            }
            if(h1 < h2){
                for(int i = c2; i >= c1; --i) v2.push_back(a[h1][i]);
                ++h1; --h2;
            }
        }
        reverse(all(v2));
        c1 = 1; c2 = 4 * n; h1 = 1; h2 = 4 * n;
        while(h1 < h2 && c1 < c2){
            for(int i = h2; i >= h1; --i) v1.pb(a[i][c2]);
            ++c1; --c2;
            for(int i = c2; i >= c1; --i) v1.push_back(a[h1][i]);
            --h2; ++h1;
            if(h1 < h2){
                for(int i = h1; i <= h2; ++i) v1.pb(a[i][h1]);
                ++c1; --c2;
            }
            if(c1 < c2){
                for(int i = c1; i <= c2; ++i) v1.pb(a[h2][i]);
                ++h1; --h2;
            }
        }
        reverse(all(v1));
        for(auto &x : v1) cout << x << ' ';
        cout << endl;
        for(auto &x : v2) cout << x << ' ';
        cout << endl;
    }
}