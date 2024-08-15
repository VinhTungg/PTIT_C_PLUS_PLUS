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
    foru(i, 1, s.size() - 1) s[i] = tolower(s[i]);
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int cach; cin >> cach;
        cin.ignore();
        string s; getline(cin, s);      
        vector<string> v;
        stringstream ss(s);
        while(ss >> s){
            chuanHoa(s);
            v.push_back(s);
        }
        if(cach == 1){
            cout << v[v.size() - 1] << ' ';
            foru(i, 0, v.size() - 2) cout << v[i] << ' ';
            cout << endl;
        }else{
            foru(i, 1, v.size() - 1) cout << v[i] << ' ';
            cout << v[0] << endl;
        }
    }
}