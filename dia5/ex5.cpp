#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, num, temp, cont = 0;
    map <int, int> sequencia;

    cin >> num;

    for(i = 0; i < num; i++){
        cin >> temp;
        sequencia[temp]++;
    }

    for(auto x : sequencia){
        if(x.first != x.second){
            if(x.second > x.first)
                cont += (x.second - x.first);
            else
                cont += x.second;
        }
    }

    cout << cont;

    return 0;
}