#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
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
int t;
string nums;

bool isRevNums(string s){
    foru(i, 0, (s.size() - 1) / 2 - (s.size() & 1)){
        if(s[i] != s[s.size() - 1 - i]) return false;
    }
    return true;
}

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> nums;
        if(isRevNums(nums)) puts("YES");
        else puts("NO");
    }
}