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
vector<string> v;

string check(vector<string> &v){
    int le = 0, chan = 0;
    for(string &c : v){
        if((c[c.size() - 1] - '0') & 1) ++le;
        else ++chan; 
    }
    if(le > chan){
        return v.size() & 1 ? "YES\n" : "NO\n";
    }else if(chan > le) return v.size() & 1 ? "NO\n" : "YES\n";
    return "NO\n";
}

int main(){
    //boost;
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s){
            v.push_back(s);
        }
        cout << check(v);
        v.clear();
    }
}