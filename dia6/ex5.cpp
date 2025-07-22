#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,t, i;

    cin >> n >> t;

    vector<int> minLivros(n);
    for (i = 0; i < n; i++) 
        cin >> minLivros[i];

    int esq = 0, dir = 0;
    int tempoAtual = 0;
    int quantLivros = 0;

    while (dir < n) {
        tempoAtual += minLivros[dir];

        while (tempoAtual > t) {
            tempoAtual -= minLivros[esq];
            esq++;
        }

        quantLivros = max(quantLivros, dir - esq + 1);
        dir++;
    }

    cout << quantLivros;

    return 0;
}