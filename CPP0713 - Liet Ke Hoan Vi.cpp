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
int n, a[21];
vector<bool> used(21, true);

void Try(int i){
    foru(j, 1, n){
        if(used[j]){
            used[j] = false;
            a[i] = j;
            if(i == n){
                foru(i, 1, n) cout << a[i];
                cout << ' ';
            }else Try(i + 1);
            used[j] = true;
        }
    }
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}