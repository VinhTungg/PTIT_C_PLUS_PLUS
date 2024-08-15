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
int n;
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        string nums; cin >> nums;
        string res = "";
        for(auto &c : nums){
            switch(c){
                case '2': case '3': case '5': case '7': res += c; break;
                case '4' : 
                    res += "223";
                    break;
                case '6' : 
                    res += "53";
                    break;
                case '8' : 
                    res += "7222";
                    break;
                case '9' : 
                    res += "7332";
                    break;
            }
        }
        sort(all(res), greater<char>());
        cout << res << endl;
    }
}