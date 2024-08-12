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
vector<int> minNums, maxNums;
int m, s;

void findMin(int m, int s){
    --m;
    while(m){
        int tmp = min(9, s - 1);
        s -= tmp;
        minNums.pb(tmp);
        --m;
    }
    minNums.pb(s);
    reverse(all(minNums));
    for(int &Num : minNums) cout << Num;
}

void findMax(int m, int s){
    while(m--){
        int tmp = min(9, s);
        maxNums.pb(tmp);
        s -= tmp;
    }
    for(int &Num : maxNums) cout << Num;
}

int main(){
    boost;
    int t = 1;
    //cin >> t;
    while(t--){    
        cin >> m >> s;
        if(s > 9*m || s == 0){
            cout << "-1 -1";
            return 0;
        }
        findMin(m, s);
        cout << ' ';
        findMax(m, s);
    }
}