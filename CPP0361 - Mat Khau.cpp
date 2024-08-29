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

bool cmp(string a, string b){
    return a.size() != b.size() ? a.size() > b.size() : a > b;
}

int main(){
    boost;
    int n; cin >> n;
    vector<string> v;
    while(n--){
        string str;
        cin >> str;
        v.pb(str);
    }
    int cnt = 0;
    sort(all(v), cmp);
    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v.size(); ++j){
            if(i != j and v[i].find(v[j]) != -1) ++cnt;
        }
    }
    cout << cnt;
}