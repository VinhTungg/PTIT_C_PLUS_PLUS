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
int cnt;

bool nt(int n){
    foru(i, 2, sqrt(n)) if(n % i == 0) return false;
    return n > 1;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cnt = 0;
        queue<string> q, p;
        for(int i = 1; i <= 9; ++i) q.push(to_string(i));
        while(!q.empty()){
            string tmp = q.front();
            q.pop();
            if(tmp.size() < n){
                for(int i = (tmp[tmp.size() - 1] - '0') + 1; i <= 9; ++i){
                    tmp += (i + '0');
                    q.push(tmp);
                    tmp.pop_back();
                }
            }else if(tmp.size() == n){
                if(nt(stoll(tmp))) ++cnt;
            }else break;
        }
        for(int i = 9; i >= 0; --i) p.push(to_string(i));
        while(!p.empty()){
            string tmp = p.front();
            p.pop();
            if(tmp.size() < n){
                for(int i = (tmp[tmp.size() - 1] - '0') - 1; i >= 0; --i){
                    tmp += (i + '0');
                    p.push(tmp);
                    tmp.pop_back();
                }
            }else if(tmp.size() == n){
                if(nt(stoll(tmp))) ++cnt;
            }else break;
        }
        cout << cnt << endl;
    }
}