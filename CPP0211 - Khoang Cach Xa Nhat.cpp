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
    int t = 1; 
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        int a[n]; 
        for(int &x : a) cin >> x; 
        sort(a, a + n); 
        int x = a[n - 1] - a[0]; 
        int cnt = 0;
        for(int i = 1; i <= x; i++){
            int ok = 1; 
            for(int j = 1; j < n; j++){
                if((a[j] - a[0]) % i != 0){
                    ok = 0; 
                    break; 
                } 
            } if(ok) cnt++; 
        } 
        cout << cnt << endl; 
    } 
}