#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
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
int n;
double ans;

int main(){
    cin >> n;
    ans = 0;
    foru(i, 1, n) ans += (1.0 * 1 / i);
    cout << fixed << setprecision(4) << ans;
}