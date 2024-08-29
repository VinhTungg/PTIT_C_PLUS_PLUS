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

int main() {
    boost
    int n; cin >> n;
    vector<vector<int>> a(n + 1, vector<int> (n + 1));
    int Chinh[n][n] = {}, Phu[n][n] = {};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            Chinh[i][j] = a[i][j];
            Phu[i][j] = a[i][j];
            if(i > 0 and j > 0) Chinh[i][j] += Chinh[i - 1][j - 1];
            if(i > 0 and j < n - 1) Phu[i][j] += Phu[i - 1][j + 1];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int z = 0;
            int sumChinh = 0, sumPhu = 0;
            while(z <= min(i, j)){
                int x = (Chinh[i][j] - Chinh[i - z][j - z]
            }
        }
    }
    cout << ans;
}