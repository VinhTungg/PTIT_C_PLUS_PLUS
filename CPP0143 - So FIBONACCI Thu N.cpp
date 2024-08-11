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
ll F[93];

void init(){
    F[1] = F[2] = 1;
    foru(i, 3, 92) F[i] = F[i - 1] + F[i - 2];
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    init();
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}