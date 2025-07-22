#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, t;
    cin >> t;

    while(t--){
        int N, C;
        cin >> N >> C;

        vector <long long int> vet(N);

        for(i = 0; i < N; i++)
            cin >> vet[i];

        sort(vet.begin(), vet.end());

        long long int l = 0;
        long long int r = vet[N-1] - vet[0];
        long long int dist;

        while(l <= r){
            long long int mid = (l + r) / 2;
            long long int qtdVacas = 1;
            long long int end = vet[0];

            for(i = 1; i < N; i++){
                if((vet[i] - end) >= mid){
                    end = vet[i];
                    qtdVacas++;

                    if(qtdVacas == C) break;
                }   
            }

            if(qtdVacas == C){
                dist = mid;
                l = mid + 1;
            } else 
                r = mid - 1;
            
        }

        cout << dist << "\n";
    }

    return 0;
}
