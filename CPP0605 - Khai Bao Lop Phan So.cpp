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
            ll tmp = __gcd(tu, mau);
            tu /= tmp;
            mau /= tmp;
        }
        
};

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}