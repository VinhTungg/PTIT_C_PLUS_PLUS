#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define ford(i,a,b) for(int i = a; i >= b; --i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
 
int main(){
    boost;
    int t = 1;
    ifstream in;
    in.open("PTIT.in", ios::in);
    ofstream out;
    out.open("PTIT.out", ios::out);
    //cin >> t;
    while(t--){
        string s;
        while(getline(in, s)) out << s << '\n';
    }
}