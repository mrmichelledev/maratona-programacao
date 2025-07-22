#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, i;
    cin >> n >> x;

    map<int, int> posicao;  

    for (i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (posicao.count(x - a)) {
            cout << posicao[x - a] << " " << i;
            return 0;
        }
        posicao[a] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
