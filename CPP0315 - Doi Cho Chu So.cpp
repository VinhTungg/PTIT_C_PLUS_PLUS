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
        string s; cin >> s;
        int diem_gay = -1;
        ford(i, s.size() - 1, 1) if(s[i] < s[i - 1]){
            diem_gay = i - 1;
            break;
        }
        if(diem_gay == -1) cout << diem_gay << endl;
        else{
            ford(i, s.size() - 1, diem_gay){
                if(s[i] < s[diem_gay]){
                    swap(s[i], s[diem_gay]);
                    break;
                }
            }
            cout << s << endl;
        }
    }
}