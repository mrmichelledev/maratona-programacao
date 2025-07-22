#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, i;
    cin >> n >> x;

    vector < pair<int, int> > num(n);

    for (i = 0; i < n; i++) {
        cin >> num[i].first;
        num[i].second = i + 1;
    }

    sort(num.begin(), num.end());

    for (i = 0; i < n; i++) {
        int a = num[i].first;
        int n1 = x - a;

        int esq = i + 1;
        int dir = n - 1;

        while (esq < dir) {
            int n2 = num[esq].first;
            int n3 = num[dir].first;

            if (n2 + n3 == n1) {
                cout << num[esq].second << " " << num[dir].second << " " << num[i].second;
                return 0;

            } else if (n2 + n3 < n1)
                esq++;
            else 
                dir--;
            
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}
