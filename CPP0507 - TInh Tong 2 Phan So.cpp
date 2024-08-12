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
    int tu, mau;
};

void nhap (PhanSo &A){
    cin >> A.tu >> A.mau;
}

void rutgon(PhanSo &A){
    int tmp = __gcd(A.tu, A.mau);
    A.tu /= tmp;
    A.mau /= tmp;
}

PhanSo tong(PhanSo A, PhanSo B){
    rutgon(A); rutgon(B);
    A.tu *= B.mau;
    B.tu *= A.mau;
    A.mau *= B.mau;
    A.tu += B.tu;
    rutgon(A);
    return A;
}

void in (PhanSo A){
    cout << A.tu << '/' << A.mau;
}

int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}