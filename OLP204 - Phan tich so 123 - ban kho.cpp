#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1;
vector<int> v;
int dp[100001] = {};

void init(){
    queue<string> q;
    q.push("1"); q.push("2"); q.push("3");
    v.push_back(1); v.push_back(2); v.push_back(3);
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        if(tmp.length() == 6) break;
        for(char i = '1'; i <= '3' and tmp.length() < 5; ++i){
            tmp += i;
            v.push_back(stoll(tmp));
            q.push(tmp);
            tmp.pop_back();
        }
    }
    for (auto &x : v) dp[x] = 1;
    for(int i = 1; i <= 1e5; ++i){
        if(!dp[i]){
            int len = v.size();
            dp[i] = 1e8;
            for(int j = 0; j < len and v[j] < i; ++j){
                dp[i] = min(dp[i], dp[v[j]] + dp[i - v[j]]);
            }
        }
    }
}

int main(){
    boost;
    cin >> t;
    init();
    while(t--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }
}