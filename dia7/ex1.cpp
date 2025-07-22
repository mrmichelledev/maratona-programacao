#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, q, i;
    cin >> n >> q;

    vector <long long int> num(n);
    vector <long long int> a(q);
    vector <long long int> b(q);
    vector <long long int> soma(n);

    for(i = 0; i < n; i++){
        cin >> num[i];

        if(i == 0) soma[i] = num[i];
        else soma[i] = soma[i-1] + num[i];
    }


    for(i = 0; i < q; i++)
        cin >> a[i] >> b[i];

    for(i = 0; i < q; i++){
        if(a[i] == 0 || a[i] == 1)
            cout << soma[b[i] - 1] << "\n";
        else
            cout << soma[b[i] - 1] - soma[a[i] - 2] << "\n";
    }

    return 0;
}