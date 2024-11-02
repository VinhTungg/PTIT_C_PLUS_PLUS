#include <bits/stdc++.h>

using namespace std;

int prime[10000001];

void sang(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
     for (int i = 2; i * i <= n; i++) { 
            if (prime[i] == 1) {
                int square = i * i;
                if (square <= n) { 
                    cout << square << " ";
                }
            }
        }
    cout << '\n';
    }
    return 0;
}