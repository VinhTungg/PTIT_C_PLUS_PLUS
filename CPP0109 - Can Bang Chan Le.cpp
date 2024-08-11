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

bool isChanLe(int num){
    string nums = to_string(num);
    int chan = 0, le = 0;
    foru(i, 0, nums.sz() - 1){
        if(nums[i] & 1) ++le;
        else ++chan;
    }
    return chan == le;
}

int main(){
    boost;
    int cnt = 0; string ans = "";
    cin >> n;
    int Nums = pow(10, n - 1);
    foru(i, Nums, Nums * 10 - 1){
        if(isChanLe(i)) {
            ans.append(to_string(i));
            ans += ' ';
            ++cnt;
        }
        if(cnt == 10){
            cout << ans << endl;
            cnt = 0; ans = "";
        }
    }
    if(ans != "") cout << ans;
}