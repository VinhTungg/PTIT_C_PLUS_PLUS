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
// Sử dụng công thức Shoelace

struct Point{
    int x, y;
};

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<Point> points(n);
        for(auto &num : points) cin >> num.x >> num.y;
        double area = 0;
        for(int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            area += points[i].x * points[j].y;
            area -= points[i].y * points[j].x;
        }
        cout << fixed << setprecision(3) << fabs(area) / 2.0 << endl;
    }
}