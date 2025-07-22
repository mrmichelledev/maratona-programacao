#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, i;
    cin >> n >> q;

    vector <int> vet(n);
    for(i = 0; i < n; i++)
        cin >> vet[i];    

    int consulta, mid;
    
    for(i = 0; i < q; i++){
        cin >> consulta;

        int l = 0;
        int r = n - 1;
        int indice = -1;
        
        while(l <= r){
            mid = (l + r) / 2;
            
            if(consulta == vet[mid]){
                if (vet[mid - 1] == vet[mid])
                    indice = mid - 1;
                else 
                    indice = mid;

                break;

            } else if(consulta > vet[mid]){
                l = mid + 1;

            } else if(consulta < vet[mid]){
                r = mid - 1;
            }
        }

        cout << indice << "\n";
    }

    

    return 0;
}