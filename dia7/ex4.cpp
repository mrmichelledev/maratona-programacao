#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, s, t, i;
    cin >> n >> m;

    vector<int> vet(n + 1);
    for(i = 1; i <= n; i++){
        cin >> vet[i];
    }

    vector<long long int> danoA(n + 1, 0); 
    vector<long long int> danoB(n + 1, 0);

    for(i = 2; i <= n; i++) {
        if(vet[i - 1] > vet[i])
            danoA[i] = danoA[i - 1] + (vet[i - 1] - vet[i]);
        else
            danoA[i] = danoA[i - 1];
    }

    for(i = n - 1; i >= 1; i--) {
        if(vet[i + 1] > vet[i])
            danoB[i] = danoB[i + 1] + (vet[i + 1] - vet[i]);
        else
            danoB[i] = danoB[i + 1];
    }

    for(i = 0; i < m; i++){
        cin >> s >> t;
        if(s < t)
            cout << danoA[t] - danoA[s] << '\n';
        else
            cout << danoB[t] - danoB[s] << '\n';
    }

    return 0;
}