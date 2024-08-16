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

struct PhanSo{
    ll tu, mau;
};

void rutgon(PhanSo &A){
    int tmp = __gcd(A.tu, A.mau);
    A.tu = A.tu / tmp;
    A.mau = A.mau / tmp;
}

void process(PhanSo A, PhanSo B){
    PhanSo C, D;
    C.tu = A.tu * B.mau + B.tu * A.mau;
    C.mau = A.mau * B.mau;
    rutgon(C);
    C.tu *= C.tu;
    C.mau *= C.mau;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    rutgon(D);
    cout << C.tu << '/' << C.mau << ' ' << D.tu << '/' << D.mau << endl;
}

int main(){
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}