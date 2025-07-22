#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    map <int, int> freq;

    cin >> n; 

    for (i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }

    int quantCaixas = 0;
    
    for (auto i : freq) {
        if (i.second > quantCaixas)
            quantCaixas = i.second;
    }

    cout << quantCaixas;

    return 0;
}
