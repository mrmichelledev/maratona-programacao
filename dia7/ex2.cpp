#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, q, i, x, y;
    cin >> n >> q;

    vector <long long int> num(n);
    vector <long long int> soma(n+1, 0);

    for(i = 0; i < n; i++)
        cin >> num[i];

    sort(num.begin(), num.end());

    for(i = 0; i < n; i++)
        soma[i + 1] = soma[i] + num[i];

    while(q--){
        cin >> x >> y;

        int inicio = n - x;

        long long int fim = soma[inicio + y] - soma[inicio];

        cout << fim << "\n";
    }

    return 0;
}