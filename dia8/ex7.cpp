#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, t;
    cin >> t;

    for(i = 0; i < t; i++) {
        long long int n, k;
        cin >> n >> k;

        long long int l = 1;
        long long int r = n * k;
        long long int maxMin = r;

        while (l <= r) {
            long long int mid = (l + r) / 2;
            long long int soma = mid * n;

            if (soma % k == 0) {
                maxMin = mid;     
                r = mid - 1;

            } else 
                l = mid + 1;
            
        }

        cout << maxMin << "\n";
    }

    return 0;
}
