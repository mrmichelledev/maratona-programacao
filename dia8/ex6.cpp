#include <bits/stdc++.h>
#include <cmath> 
using namespace std;

int main (){
    int t, n, i, j;
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;

        vector <long long int> vet(n);
        long long int soma = 0;

        for(j = 0; j < n; j++){
            cin >> vet[j];
            soma += vet[j];
        }

        double r = sqrt(soma);

        if(round(r) * round(r) == soma)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}