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

class PhanSo{
    public:
        ll tu, mau;
        PhanSo(ll a, ll b){
            tu = a; mau = b;
        }
        friend istream& operator >> (istream& in, PhanSo& A){
            in >> A.tu >> A.mau;
            return in;
        }
        friend ostream& operator << (ostream& out, PhanSo A){
            out << A.tu <<'/' << A.mau;
            return out;
        }
        void rutgon(){
            int tmp = __gcd(tu, mau);
            tu /= tmp;
            mau /= tmp;
        }
        friend PhanSo operator + (PhanSo &a, PhanSo &b){
            a.rutgon();
            b.rutgon();
            a.tu *= b.mau;
            b.tu *= a.mau;
            a.mau *= b.mau;
            a.tu += b.tu;
            a.rutgon();
            return a;
        }
};

int main(){
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}