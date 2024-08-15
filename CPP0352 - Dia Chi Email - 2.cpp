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

void chuanHoa(string &s){
    foru(i, 0, s.size() - 1) s[i] = tolower(s[i]);
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    cin.ignore();
    unordered_map<string, int> mp;
    while(t--){
        string s; getline(cin, s);      
        vector<string> v;
        stringstream ss(s);
        while(ss >> s){
            chuanHoa(s);
            v.push_back(s);
        }
        string ans = "";
        ans += v[v.size() - 1];
        foru(i, 0, v.size() - 2){
            ans += v[i][0];
        }
        mp[ans]++;
        cout << ans;
        if(mp[ans] > 1) cout << mp[ans];
        cout << "@ptit.edu.vn\n"; 
    }
}