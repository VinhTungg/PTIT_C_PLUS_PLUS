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
    int a[n + 2][n + 2] = {};
    int Chinh[n + 2][n + 2] = {}, Phu[n + 2][n + 2] = {};
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
            Chinh[i][j] = a[i][j];
            Phu[i][j] = a[i][j];
            if(i > 1 and j > 1) Chinh[i][j] += Chinh[i - 1][j - 1];
            if(i > 1 and j < n) Phu[i][j] += Phu[i - 1][j + 1];
        }
    }
    int ans = -1e9;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            for(int size = 1; size <= min(i, j); ++size){
                int mainDig = 0, secDig = 0;
                mainDig = Chinh[i][j] - Chinh[i - size][j - size];
                secDig = Phu[i][j - size + 1] - Phu[i - size][j + 1];
                //cout << mainDig << "-" << secDig << ' ';
                if(size == 1) ans = max(ans, mainDig);
                else ans = max(ans, mainDig - secDig);
                //cout << mainDig - secDig << ' ';
            }
            //cout << "/ ";
        }
        //cout << endl;
    }
    cout << ans;
}