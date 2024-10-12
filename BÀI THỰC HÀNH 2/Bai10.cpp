#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

using namespace std;

int main(){
    boost;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(i == 1 or i == n / 2 + 1) cout << "*";
            else{
                if(j == 1) cout << "*";
                else cout << ' ';
            }
        }
        cout << endl;
    }
}