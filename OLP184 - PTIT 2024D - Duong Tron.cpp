#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const long double epl = 1e-9;

int main(){
    boost;
    long double x, y, r;
    cin >> x >> y >> r;
    ll cnt = 0;
    ll MinX = static_cast<ll>(x - r), MaxX = static_cast<ll>(x + r);
    for(ll i = MinX; i <= MaxX; ++i){
        long double disX = fabs(i - x);
        if((disX - r) <= epl){
            long double disY = sqrt(r * r - disX * disX);
            ll MinY = static_cast<ll>(y - disY), MaxY = static_cast<ll>(y + disY);
            while (MinY <= y + disY and !((i - x) * (i - x) + (MinY - y) * (MinY - y) - r * r <= epl)) {
                ++MinY;
            }
            while (MaxY >= y - disY and !((i - x) * (i - x) + (MaxY - y) * (MaxY - y) - r * r <= epl)) {
                --MaxY;
            }

            // Đếm số lượng điểm y nằm giữa yMin và yMax (bao gồm cả yMin và yMax)
            cnt += (MaxY - MinY + 1);
        }
    }
    cout << cnt;
}