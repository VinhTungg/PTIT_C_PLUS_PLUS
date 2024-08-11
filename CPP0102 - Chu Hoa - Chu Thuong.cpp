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
char alpha;

int main(){
    cin >> t;
    while(t--){
        cin >> alpha;
        alpha = (alpha == toupper(alpha) ? tolower(alpha) : toupper(alpha));
        cout << alpha << endl;
    }
}