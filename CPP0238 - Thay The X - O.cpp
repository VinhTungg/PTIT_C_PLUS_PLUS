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

// Sử dụng quay lui hoặc kỹ thuật loang trên mảng 2 chiều
char a[25][25];
int n, m;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void loang(int i, int j){
    if(a[i][j] == 'X') return;
    a[i][j] = 'T';
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'O'){
            loang(i1, j1);
        }
    }
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        foru(i, 1, n) foru(j, 1, m) cin >> a[i][j];
        foru(i, 1, n) foru(j, 1, m) if(i == 1 or i == n or j == 1 or j == m) loang(i, j);
        foru(i, 1, n){
            foru(j, 1, m){
                if(a[i][j] != 'T') cout << "X ";
                else cout << "O ";
            }
            cout << endl;
        }
    }
}