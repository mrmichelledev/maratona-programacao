#include <bits/stdc++.h>
using namespace std;

void troca(char* a, char* b){
    char aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int n, m, i;
    cin >> n;

    vector <string> seq(n);

    for(i = 0; i < n; i++)
        cin >> seq[i];


    for(i = 0; i < n; i++){
        int esq = 0, dir = 1;

        while(dir < seq[i].length()){
            int a = (seq[i][esq]) - '0';
            int b = (seq[i][dir]) - '0';

            if((a % 2) != (b % 2)){
                cout << "\ntrocando a (" << seq[i][esq] << ") e b (" << seq[i][dir] << ")\n";

                troca(&seq[i][esq], &seq[i][dir]);

                cout << "agora a (" << seq[i][esq] << ") e b (" << seq[i][dir] << ")\n";
            }

            esq++;
            dir++;
        }

    }

    for(i = 0; i < n; i++)
        cout << seq[i];
    
    return 0;
}