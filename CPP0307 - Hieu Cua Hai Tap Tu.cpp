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
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        set<string> s1;
        unordered_set<string> s2;
        string x;
        getline(cin, x);
        stringstream xau1(s);
        while(xau1 >> s){
            s1.insert(s);
        }
        stringstream xau2(x);
        while(xau2 >> x){
            s2.insert(x);
        }
        for(auto &str : s1) if(s2.find(str) == s2.end()) cout << str << ' ';
        cout << endl;
    }
}