#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;

    cin >> n;

    vector <int> cartas(n);
    for(i = 0; i < n; i++)
        cin >> cartas[i];
    
    int dimaP = 0, serejaP = 0;
    int esq = 0, dir = n - 1;
    int rodada =  0, aux;

    while(esq <= dir){
        if(cartas[esq] > cartas[dir]){
            aux = cartas[esq];
            esq++;

        } else{
            aux = cartas[dir];
            dir--;
        }

        if(rodada%2 == 0)
            serejaP += aux;
        else
            dimaP += aux;

        rodada++;
    }

    cout << serejaP << " " << dimaP;

    return 0;
}