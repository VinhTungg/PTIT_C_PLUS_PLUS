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
    int t = 1; 
    cin >> t;
    while(t--){
        string s1, s2; cin >> s1 >> s2;
        int cnt[26] = {};
        int l, r, s = INT_MAX;
        foru(i, 0, s2.size() - 1) ++cnt[s2[i] - 'a'];
        foru(i, 0, s1.size() - 1){
            int alp[26] = {};
            foru(j, i, s1.size() - 1){
                alp[s1[j] - 'a']++;
                bool check = 0;
                foru(k, 0, 25){
                    if(alp[k] < cnt[k]){
                        check = true; 
                        break;
                    }
                }
                if(!check && s > j - i + 1){
                    s = j - i + 1;
                    l = i;
                    r = j;
                }
            }
        }
        if(s == INT_MAX) cout << -1 << endl;
        else {
            foru(i, l, r) cout << s1[i];
            cout << endl;
        }
    }
}