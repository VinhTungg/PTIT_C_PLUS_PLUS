#include <iostream>
#include <vector>
using namespace std;

/////////// NOT AC

// Hàm tính GCD của hai số
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Hàm tính LCM của hai số
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

const int MOD = 10007;

int sum_of_lcm_subsets(const vector<int>& arr) {
    int n = arr.size();
    int total_sum = 0;
    
    // Duyệt qua tất cả các tập con bằng cách sử dụng bitmask
    for (int mask = 1; mask < (1 << n); ++mask) {
        int current_lcm = 1;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) { // Nếu phần tử thứ i thuộc tập con
                current_lcm = lcm(current_lcm, arr[i]);
                if (current_lcm >= MOD) {
                    current_lcm %= MOD;
                }
            }
        }
        total_sum = (total_sum + current_lcm) % MOD;
    }
    
    return total_sum;
}

int main() {
    int T;  // Số lượng test cases
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int result = sum_of_lcm_subsets(arr);
        cout << "Case " << t << ": " << result << endl;
    }
    return 0;
}
