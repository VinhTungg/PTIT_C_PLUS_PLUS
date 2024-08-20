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
int n, k, a[21];
vector<bool> used(21, true);

void Try(int i){
    foru(j, i, n){
        if(a[i - 1] < j){
            a[i] = j;
            if(i == k){
                foru(u, 1, k){
                    cout << a[u];
                }
                cout << ' ';
            }else Try(i + 1);
        }
    }
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}