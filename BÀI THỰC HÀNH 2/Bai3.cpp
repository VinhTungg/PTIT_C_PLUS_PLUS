#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int check(string s){
    int c = 0, l = 0;
    for(int i = 0; i < s.size(); ++i){
        if((i + 1) & 1) l += (s[i] - '0');
        else c += (s[i] - '0');
    }
    return (l - c) % 11 == 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        cout << check(s) << endl;
    }
}