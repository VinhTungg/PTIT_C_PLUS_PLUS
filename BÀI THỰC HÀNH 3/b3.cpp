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

int check1(string s){
    foru(i, 0, s.size() - 2){
        if(s[i] >= s[i + 1]) return 0;
    }
    return 1;
}

int check2(string s){
    foru(i, 0, s.size() - 2){
        if(s[i] != s[i + 1]) return 0;
    }
    return 1;
}

int check3(string s){
    foru(i, 0, 1){
        if(s[i] != s[i + 1]) return 0;
    }
    if(s[3] != s[4]) return 0;
    return 1;
}

int check4(string s){
    bool check = false;
    foru(i, 0, s.size() - 1){
        check = false;
        if(s[i] == '6' || s[i] == '8') check = true;
        if(!check) return 0;
    }
    return 1;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = "";
        foru(i, 5, s.size() - 1){
            if(s[i] == '.') continue;
            else ans += s[i];
        }
        int res = (check1(ans) | check2(ans) | check3(ans) | check4(ans));
        cout << (res == 1 ? "YES\n" : "NO\n");
    }
}