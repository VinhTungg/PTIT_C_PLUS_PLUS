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
int a[10] = {0, 0, 20, 38, 50, 38, 20, 8, 5, 0};
bool nt(int n){
    foru(i, 2, sqrt(n)) if(n % i == 0) return false;
    return n > 1;
}

bool checkTang(int n){
    string s = to_string(n);
    foru(i, 0, s.size() - 2) if(s[i] >= s[i + 1]) return false;
    return true;
}

bool checkGiam(int n){
    string s = to_string(n);
    foru(i, 0, s.size() - 2) if(s[i] <= s[i + 1]) return false;
    return true;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
        continue;
        int cnt = 0;
        foru(i, pow(10, n - 1), pow(10, n) - 1){
            if(checkGiam(i) && nt(i)) ++cnt;
            if(checkTang(i) && nt(i)) ++cnt;
        }
        cout << cnt << endl;
    }
}