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

bool nt(int n){
    foru(i, 2, sqrt(n)){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int TongchuSo(int n){
    int ans = 0;
    while(n){
        ans += (n % 10);
        n /= 10;       
    }
    return ans;
}

int UocNt(int n){
    int ans = 0;
    foru(i, 2, n){
        while(n % i == 0){
            ans += TongchuSo(i);
            n /= i;
        }
    }
    return ans;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(!nt(n) && (TongchuSo(n) == UocNt(n))) puts("YES");
        else puts("NO");
    }
}