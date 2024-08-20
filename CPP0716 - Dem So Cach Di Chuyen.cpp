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
int a[21][21];
int n, k;
int ans;

void Try(int i, int j, int sum){
    if(i == n && j == n && sum == k) ++ans;
    if(i >= 1 and i <= n) Try(i + 1, j, sum + a[i + 1][j]);
    if(j >= 1 and j <= n) Try(i, j + 1, sum + a[i][j + 1]);
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        cin >> n >> k;
        ans = 0;
        foru(i, 1, n) foru(j, 1, n) cin >> a[i][j];
        Try(1, 1, a[1][1]);
        cout << ans << endl;
    }
}