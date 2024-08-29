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
int kh = 1, mh = 1, hd = 1;

class KH{
    public:
        string idGuest, nameGuest, sexGuest, dateGuest, addGuest;
};
KH Kh[25];

class KhachHang{
    public:
        string idGuest, nameGuest, sexGuest, dateGuest, addGuest;
        friend istream& operator >> (istream &in, KhachHang &a){
            if(kh < 10) a.idGuest = "KH00" + to_string(kh);
            else a.idGuest = "KH0" + to_string(kh);
            Kh[kh - 1].idGuest = a.idGuest;
            scanf("\n");
            getline(in, a.nameGuest);
            Kh[kh - 1].nameGuest = a.nameGuest;
            getline(in, a.sexGuest);
            Kh[kh - 1].sexGuest = a.sexGuest;
            getline(in, a.dateGuest);
            Kh[kh - 1].dateGuest = a.dateGuest;
            getline(in, a.addGuest);
            Kh[kh - 1].addGuest = a.addGuest;
            ++kh;
            return in;
        }
};

class MH{
    public:
        string idItem, nameItem, unitItem;
        ll sellPrice, buyPrice;  
};
MH Mh[45];

class MatHang{
    public:
        string idItem, nameItem, unitItem; 
        ll sellPrice, buyPrice;
        friend istream& operator >> (istream &in, MatHang &a){
            if(mh < 10) a.idItem = "MH00" + to_string(mh);
            else a.idItem = "MH0" + to_string(mh);
            Mh[mh - 1].idItem = a.idItem;
            scanf("\n");
            getline(in, a.nameItem);
            Mh[mh - 1].nameItem = a.nameItem;
            getline(in, a.unitItem);
            Mh[mh - 1].unitItem = a.unitItem;
            in >> a.buyPrice;
            Mh[mh - 1].buyPrice = a.buyPrice;
            in >> a.sellPrice;
            Mh[mh - 1].sellPrice = a.sellPrice;
            ++mh;
            return in;
        }
};

class HoaDon{
    public:
        string idBill, idGuest, idItem;
        ll nums;
        friend istream& operator >> (istream &in, HoaDon &a){
            if(hd < 10) a.idBill = "HD00" + to_string(hd++);
            else if(hd > 9 && hd < 100) a.idBill = "HD0" + to_string(hd++);
            else a.idBill = "HD" + to_string(hd++);
            in >> a.idGuest;
            in >> a.idItem;
            in >> a.nums;
            return in;
        }
        friend ostream& operator << (ostream &out, HoaDon a){
            cout << a.idBill << ' ';
            for(auto &x : Kh) if(x.idGuest == a.idGuest){
                cout << x.nameGuest << ' ' << x.addGuest << ' ';
            }
            for(auto &x : Mh) if(x.idItem == a.idItem){
                cout << x.nameItem << ' ' << x.unitItem << ' ' << x.buyPrice << ' ' << x.sellPrice << ' ' << a.nums << ' ' << (x.sellPrice * a.nums) << endl;
            }
            return out;
        }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}