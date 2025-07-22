#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num;
    int i, j, quant, temp, aux = 0, troca = 0;

    cin >> quant;

    for(i = 0; i < quant; i++){
        cin >> temp;
        num.push_back(temp);
    }

    sort(num.begin(), num.end());

    for(i = 0; i < quant; i++){
        if(num[i] != aux){
            troca++;
            aux = num[i];
        }
    }

    cout << troca << "\n";


    return 0;
}