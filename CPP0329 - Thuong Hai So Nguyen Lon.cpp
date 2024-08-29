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

// Phép Trừ
string mul(string a, string b) {
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int x;
	for (int i = a.length() - 1; i >= 0; i--) {
		if (a[i] >= b[i])
			x = a[i] - b[i];
		else {
			x = a[i] - b[i] + 10;
			a[i - 1] -= 1;
		}
		c.push_back(x + '0');
	}
	for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
	return c;
}
// Phép Cộng
string add(string a, string b) {
	if (a.length() < b.length())swap(a, b);
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int x = a[i] + b[i] - 96 + nho;
		nho = x / 10;
		int z = x % 10;
		c.push_back(z + '0');
	}
	if (nho > 0)c.push_back(nho + '0');
	for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
	return c;
}

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        string Chia, biChia;
        cin >> Chia >> biChia;
        string ans = "0", tmp;
        // Khởi tạo chuỗi ans và tmp là chuỗi để thực hiện phép trừ
        for(int i = 0; i < Chia.size(); ++i){
            tmp.push_back(Chia[i]);
            ans.push_back('0');
            int thuong = 0;
            // push_back cho đến khi tmp > biThuong
            while(tmp.length() == biChia.length() && tmp > biChia || tmp.length() > biChia.length()){
                tmp = mul(tmp, biChia);
                // Ta dùng phép trừ và ++thương lên (tính chất của phép nhân là n lần cộng số biChia vậy nên ta chỉ cần trừ ngược lại)
                ++thuong;
                while(tmp[0] == '0') tmp.erase(0, 1);
            }
            // Thương chính là số lần tmp trừ cho đến khi nhỏ hơn biChia
            ans = add(ans, to_string(thuong));
            // Cộng thương vào chuỗi kết quả và làm lại cho đến khi hết vòng for
        }
        if(tmp == biChia) ans = add(ans, "1");
        // Nếu tmp == biChia tức là vẫn trừ thêm một lần nữa vậy nên ta add 1
        if(Chia.length() == biChia.length() && Chia < biChia || Chia.length() < biChia.length()) cout << "0\n";
        else{
            while(ans[0] == '0') ans.erase(0, 1);
            cout << ans << endl;
        }
    }
}