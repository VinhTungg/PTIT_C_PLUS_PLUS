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
    //boost;
    int t = 1;
    cin >> t;
    scanf("\n");
    while(t--){
        char s[100005];
        fgets(s, 100000, stdin);
        int cnt = 0;
        s[strlen(s) - 1] = '\0';
        char *tok = strtok(s, " \t\n");
        while(tok != NULL){
            ++cnt;
            tok = strtok(NULL, " \t\n");
        }
        cout << cnt << endl;
    }
}