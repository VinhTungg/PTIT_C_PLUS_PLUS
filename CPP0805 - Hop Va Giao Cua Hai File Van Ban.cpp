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
    set<string> hop, s1, giao;
    ifstream in;
    in.open("DATA1.in");
        string s;
        while(in >> s){
            transform(all(s), s.begin(), ::tolower);
            hop.insert(s);
            s1.insert(s);
        }
    in.close();
    ifstream inp;
    inp.open("DATA2.in");
        string str;
        while(inp >> str){
            transform(all(str), str.begin(), ::tolower);
            hop.insert(str);
            if(s1.find(str) != s1.end()) giao.insert(str); 
        }
    inp.close();
    for(auto &x : hop) cout << x << ' ';
    cout << endl;
    for(auto &x : giao) cout << x << ' ';
}