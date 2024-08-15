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

string calc(string s1, string s2){
    if(s2.size() < s1.size()){
        s2.insert(0, s1.size() - s2.size(), '0');
    }
    string ans = "";
    ford(i, s1.size() - 1, 0){
        int tmp;
        if(s1[i] >= s2[i]) tmp = s1[i] - s2[i];
        else{
            tmp = 10 + (s1[i] - '0') - (s2[i] - '0');
            s2[i - 1]++;
        }
        ans.insert(0, to_string(tmp));
    }
    return ans;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string soLon, soBe;
        cin >> soLon >> soBe;
        if(soLon.size() < soBe.size()) swap(soLon, soBe);
        if(soLon.size() == soBe.size()){
            if(soLon < soBe) swap(soLon, soBe);
        }
        string ans = calc(soLon, soBe);
        cout << ans << endl;
    }
}