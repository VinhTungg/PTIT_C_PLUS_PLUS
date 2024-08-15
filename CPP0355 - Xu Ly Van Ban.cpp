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
    s[0] = toupper(s[0]);
    foru(i, 1, s.size() - 1) if(isalpha(s[i])) s[i] = tolower(s[i]);
}

int main(){
    boost;
    int t = 1;
    //cin >> t;
    //cin.ignore();
    while(t--){
        string s;
        string ans = "";
        vector<string> v;
        while(cin >> s){
            ans += s;
            ans += ' ';
            int idx = ans.size() - 2;
            if(ans[idx] == '.' || ans[idx] == '!' || ans[idx] == '?'){
                ans.erase(idx, 2);
                chuanHoa(ans);
                v.pb(ans);
                ans = "";
            }
        }
        for(auto &s : v) cout << s << endl;
    }
}