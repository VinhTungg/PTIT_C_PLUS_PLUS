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
int n;
int X[21] = {};
bool check = true;

void sinh(){
    int i = n;
    while(i > 0 && X[i] == 1){
        --i;
    }
    X[i] = 1;
    if(i > 0) foru(j, i + 1, n) X[j] = 0;
    else check = false;
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        memset(X, 0, sizeof(X));
        check = true;
        while(check){
            foru(i, 1, n) cout << X[i];
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
}