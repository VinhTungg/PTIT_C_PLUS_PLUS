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

void chuan_hoa(string& s){
	for(int i = 0; i < s.size(); ++i){
		s[i] = tolower(s[i]);
	}
}
 
int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        string s;
        cin >> s;
        chuan_hoa(s);
        int z=0;
        while(z++ < s.size()){
            if(s[z-1] == 'a' || s[z-1] == 'i'|| s[z-1] == 'e' || s[z-1] == 'u' || s[z-1] == 'o'|| s[z-1] == 'y')
            {
                s.erase(z-1,1);
                z--;
            }
            else {
                s.insert(z-1,1,'.');
                z++;
            }
        }
        cout << s;
    }
}