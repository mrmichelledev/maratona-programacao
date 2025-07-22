#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    long long int x;
    cin >> n >> x;

    vector <int> vet(n);

    for(i = 0; i < n; i++)
        cin >> vet[i];

    map <long long int, int> freq;
    freq[0] = 1;
    long long int soma = 0, sub = 0;

    for(i = 0; i < n; i++){
        soma += vet[i];
        sub += freq[soma - x];
        freq[soma]++;
    }

    cout << sub;

    return 0;
}