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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ok = 0;
        if(n % 2020 == 0) ok = 1;
        else if(n % 2021 == 0) ok = 1;
        while(n >= 2020){
            n -= 2020;
            if(n % 2021 == 0){
                ok = 1;
                break;
            }
        }
        if(ok) puts("YES");
        else puts("NO");
    }
}