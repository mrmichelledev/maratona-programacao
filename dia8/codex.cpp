
#include<bits/stdc++.h>
using namespace std;

vector<int> v = {1, 5 ,7, 29, 51, 103, 251, 1009};
int main(){
    int n = v.size();

    int x = 4; // elemento que estamos procurando

    // no inicio nosso intervalo abrange todo array, depois vamos atualizando o intervalo atual
    // 'l' e 'r' marca o inicio e o fim do intervalo atual 
    int l = 0; // inicio do array
    int r = n-1; // ultima posicao do array

    int mid; // vai marcar o "meio" dos intervalos

    int it = 1; // vai marcar o tanto de vezes que rodamos o loop
    while(l <= r){
        cout << it << "\n";
        mid = (l+r)/2; // atualizamos o meio

        if(x == v[mid]){ // se o elemento x esta na posicao do meio do intervalo atual, achamos entao 
            cout << "achei na pos. " << mid << "\n";
            break;
        }
        else if(x < v[mid]){ // se x for menor que o elemento do meio, descartamos oq esta na esquerda
            r = mid - 1; // atualizamos o marcador do fim do intervalo (right)
        }
        else if(x > v[mid]){ // se x for maior que o elemento do meio, descartamos oq esta na direita
            l = mid + 1; // atualizamos o marcador do inicio do intervalo (left)
        }
        it++;
    }

    return 0;
}