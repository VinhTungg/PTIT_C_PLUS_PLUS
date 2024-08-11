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
double a, b, c, d;

double calcDis(double a, double b, double c, double d){
    return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        double ans = calcDis(a, b, c, d);
        cout << fixed << setprecision(4) << ans << endl;
    }
}