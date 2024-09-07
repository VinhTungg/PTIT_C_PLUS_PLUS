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

string mul(string num1, int num2){
    if(num1 == "0" || num2 == 0) return "0";
    string ans(num1.size(), '0');
    int nho = 0;
    for(int i = num1.size() - 1; i >= 0; --i){
        nho = num2 * (num1[i] - '0') + nho;
        ans[i] = nho % 10 + '0';
        if(nho) nho /= 10;
    }
    if(nho) ans = to_string(nho) + ans;
    return ans;
}

string solve(int n){
    vector<int> v;
    for(int i = n + 2; i <= 2 * n; ++i){
        v.pb(i);
    }
    for(int i = 2; i <= n; ++i){
        int tmp = i;
        for(int j = 0; j < v.size() && tmp > 1; ++j){
            int uoc = __gcd(v[j], tmp);
            v[j] /= uoc;
            tmp /= uoc;
        }
    }
    string ans = "1";
    for(int i = 0; i < v.size(); ++i){ 
        ans = mul(ans, v[i]);
    }
    return ans;
}

int main(){
    boost;
    //int t = 1; 
    //cin >> t;
    //while(t--){
        short int n;
        cin >> n;
        cout << solve(n + 1);
    //}
}