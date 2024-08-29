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

// Sử dụng định thức

struct Point{
    int x, y, z;
};

int calDet(int x1, int x2, int x3, int y1, int y2, int y3, int z1, int z2, int z3){
    int ans = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3) - (z1 * y2 * x3) - (y1 * x2 * z3) - (x1 * z2 * y3);
    return ans;
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        Point point[5];
        foru(i, 1, 4){
            cin >> point[i].x >> point[i].y >> point[i].z;
        }
        int det1 = point[1].x * calDet(point[2].y, point[2].z, 1, point[3].y, point[3].z, 1, point[4].y, point[4].z, 1);
        int det2 = point[1].y * calDet(point[2].x, point[2].z, 1, point[3].x, point[3].z, 1, point[4].x, point[4].z, 1);
        int det3 = point[1].z * calDet(point[2].y, point[2].x, 1, point[3].y, point[3].x, 1, point[4].y, point[4].x, 1);
        int det4 = calDet(point[2].y, point[2].z, point[2].x, point[3].y, point[3].z, point[3].x, point[4].y, point[4].z, point[4].x);
        int res = det1 - det2 + det3 - det4;
        if(!res) puts("YES");
        else puts("NO");
    }
}