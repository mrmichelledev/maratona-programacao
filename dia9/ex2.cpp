#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i;
    cin >> n >> k;

    vector <long long int> vet(n);
    long long int menorNum = 1000000000;

    for(i = 0; i < n; i++){
        cin >> vet[i];

        if(vet[i] < menorNum)
            menorNum = vet[i];
    }
        
    long long int l = 1;
    long long int r = menorNum * k;

    while (l < r){
        long long int mid = (l + r) / 2;
        long long int tempT = 0;

        for (i = 0; i < n; i++) {
            tempT += mid / vet[i];

            if (tempT >= k) break;  
        }

        if (tempT < k)
            l = mid + 1;
        else
            r = mid;
    }

    cout << l;

    return 0;
}