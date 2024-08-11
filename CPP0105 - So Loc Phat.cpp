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

bool isLocPhatnums(string s){
    for(auto &num : s) if(num == '1' || num == '2' || num == '4' || num == '5' || num == '7' || num == '9')
    return false;
    return true;
}

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> nums;
        if(isLocPhatnums(nums)) puts("YES");
        else puts("NO");
    }
}