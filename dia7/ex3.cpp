#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int i, j, w, m, t, q, l, r, k, n;
    
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n >> q;

        vector <long long int> vet(n);
        vector <long long int> somaTotal(n+1, 0);
        
        for(j = 0; j < n; j++){
            cin >> vet[j];
            somaTotal[j + 1] = somaTotal[j] + vet[j];
        }
            
        for(j = 0; j < q; j++){
            cin >> l >> r >> k;

            long long int sIntervaloPadrao = somaTotal[r] - somaTotal[l-1];
            long long int sIntervaloDef = k * (r-l + 1);
            
            long long int soma = somaTotal[n] - sIntervaloPadrao + sIntervaloDef;

            if(soma % 2 != 0) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}