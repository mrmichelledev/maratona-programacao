#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, n, cont = 1;

    cin >> n;
    vector <char> s(n);

    for(i = 0; i < n; i++)
        cin >> s[i];
    
    for(i = 0; i < n - 1; i++){
        if(s[i] != s[i+1])
            cont++;
    }

    cout << cont;

    return 0;
}