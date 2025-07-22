#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, n, ehmaior = 1, aux = 0;

    cin >> n;

    int vet[n];

    for(i = 0; i < n; i++){
        cin >> vet[i];

        if(vet[i] <= aux){
            ehmaior = 0;
        }

        aux = vet[i];
    }

    if(ehmaior) cout << "Yes";
    else cout << "No";

    return 0;
}