#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i;
    cin >> n >> k;

    vector <long long int> vet(n);
    long long int somaT = 0, maiorNum = 0;

    for(i = 0; i < n; i++){
        cin >> vet[i];
        somaT += vet[i];

        if(vet[i] > maiorNum)
            maiorNum = vet[i];
    }
        
    long long int l = maiorNum;
    long long int r = somaT;

    while (l < r){
        long long int mid = (l + r) / 2;

        long long int quantSub = 1;
        long long int soma = 0;

        for(i = 0; i < n; i++){
            if((soma + vet[i]) > mid){
                quantSub++;
                soma = vet[i];

            } else soma += vet[i];

        }

        if(quantSub > k)
            l = mid + 1;
        else 
            r = mid;
    }

    cout << l;

    return 0;
}