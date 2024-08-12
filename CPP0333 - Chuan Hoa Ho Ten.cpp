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

void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    foru(i, 1, s.sz() - 1) s[i] = tolower(s[i]);
}

int main(){
    boost;
    int t = 1;
    //cin >> t;
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s);
        vector<string> ans;
        while(ss >> s){
            ans.push_back(s);
        }
        foru(i, 0, ans.sz() - 2){
            chuanhoa(ans[i]);
            cout << ans[i] << (i != ans.sz() - 2 ? " " : ", ");
        }
        transform(all(ans[ans.sz() - 1]), ans[ans.size() - 1].begin(), ::toupper);
        cout << ans[ans.sz() -1];
    }
}