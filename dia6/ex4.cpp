#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    long long x;
    map <long long, int> freq;

    cin >> n >> x;

    vector <long long> seq(n);
    for (i = 0; i < n; i++)
        cin >> seq[i];
    
    freq[0] = 1;
    long long soma = 0, subs = 0;

    for(i = 0; i < n; i++){
        soma += seq[i];

        if(freq.find(soma - x) != freq.end())
            subs += freq[soma - x];

        freq[soma]++;
    }

    cout << subs << "\n";

    return 0;
}