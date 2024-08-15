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

string changeMin(string &s){
    for(auto &c : s) if(c == '6') c = '5';
    return s;
}

string changeMax(string &s){
    for(auto &c : s) if(c == '5') c = '6';
    return s;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        ll X1, X2;
        cin >> X1 >> X2;
        ll Sum1 = 0, Sum2 = 0;
        string s1, s2;
        s1 = to_string(X1);
        s2 = to_string(X2);
        s1 = changeMin(s1);
        s2 = changeMin(s2);
        Sum1 = stol(s1) + stol(s2);
        s1 = changeMax(s1);
        s2 = changeMax(s2);
        Sum2 = stol(s1) + stol(s2);
        cout << Sum1 << ' ' << Sum2 << endl;
    }
}