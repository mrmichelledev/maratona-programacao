#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, a, n, r = 1, k = 0, x;
    vector <int> p;

    cin >> n;

    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        p.push_back(a);
    }

    sort(p.begin(), p.end());

    x = p.back();

    for(i = n; i >= 0; i--){
        if (p[i] == x)
            k++;
        
        r = k;
    }
    
    return 0;
}