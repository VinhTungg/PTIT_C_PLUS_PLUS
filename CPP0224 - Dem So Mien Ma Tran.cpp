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
int n, m, a[105][105];
int cnt = 0;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k <= 7; ++k){
        int i1 = i + dx[k], j1 = dy[k] + j;
        if(a[i1][j1] && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m){
            loang(i1, j1);
        }
    }
}


int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        foru(i, 1, n) foru(j, 1, m) cin >> a[i][j];
        int cnt = 0;
        foru(i ,1 ,n)foru(j, 1, m){
            if(a[i][j]){
                loang(i, j);
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}