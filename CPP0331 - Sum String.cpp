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

string add(string a, string b) {
	if (a.length() < b.length())swap(a, b);
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int x = a[i] + b[i] - 96 + nho;
		nho = x / 10;
		int z = x % 10;
		c.push_back(z + '0');
	}
	if (nho > 0)c.push_back(nho + '0');
    reverse(c.begin(), c.end());
	return c;
}

bool check(string s, int i, int j, int k){
    int n = s.size();
    string a = s.substr(i, j);
    string b = s.substr(j + i, k);
    string target = add(a, b);
    if(target.length() > s.length() - i - j - k) return false;
    string res = "";
    int tmp = i + j + k;
    while(res.size() < target.size()){
        res += s[tmp];
        ++tmp;
    }
    if(res != target) return false;
    if(i + j + k + res.length() == s.length()) return true;
    return check(s, i + j, k, res.size());
    return false;
}

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        bool ok = false;
        for(int i = 1; i < n; ++i){
            for(int j = 1; i + j < n; ++j){
                if(check(s, 0, i, j)) ok = true;
            }
        }
        if(ok) puts("Yes");
        else puts("No");
    }
}