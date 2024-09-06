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

int main(){
    boost;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= 2 * n - 1; ++j){
            if(i != n){
                if(j == abs(i - n) + 1 || j == 2 * n - 1 - abs(i - n)) cout << "*";
                else cout << ' ';
            }else{
                if(j & 1) cout << "*";
                else cout << ' ';
            }
        }
        cout << endl;
    }
}