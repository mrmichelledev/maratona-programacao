#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, t;
    cin >> t;

    vector <int> vet(t);
    int um = 0, dois = 0;

    for(i = 0; i < t; i++){
        cin >> vet[i];

        if(vet[i] == 1)
            um++;
        else
            dois++;
    }
        

    int l = 0;
    int r = t - 1;
    int comp = 0;
    vector <int> seq1, seq2;

    while(l <= r){
        int mid = (l + r) / 2;

        if(l < mid){
            if(vet[l] == 1)
                comp++;

            else{
                seq1.push_back(comp);
                comp = 0;
            }

            l = mid + 1;
        }

        if(r > mid){
            if(vet[r] == 2)
                comp++;
                
            else {
                seq2.push_back(comp);
                comp = 0;
            }

            r = mid - 1;
        }
    } 

    for(i = 0; i < t; i++){
        if(seq1[i] == seq2[i]){
            cout << seq1[i] + seq2[i];
            break;
        } else
            cout << 0;
    }
    

    return 0;
}