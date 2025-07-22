#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, soma = 1, i;

    cin >> n;

    for(i = 0; i < n; i++)
        soma *= 2;

    cout << soma;

    return 0;
}