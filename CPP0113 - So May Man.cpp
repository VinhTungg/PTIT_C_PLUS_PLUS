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
int t;
string nums;

int check(string s){
    int n = s.length() - 1;
    if(s[n] == '6' && s[n - 1] == '8') return 1;
    return 0;
}

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> nums;
        cout << check(nums) << endl;
    }
}