#include <bits/stdc++.h>
using namespace std;

int main(){
    //ordena elementos
    set<int> conjunto;

    //inserindo um valor no vetor
    conjunto.insert(7);
    conjunto.insert(2);
    conjunto.insert(8);
    conjunto.insert(9);
    conjunto.insert(15);
    conjunto.insert(-4);

    cout << "maior elemento " << *(--conjunto.end());

    for(auto elem : conjunto){
        cout << elem << " ";
    }
    
    cout << "\n";
    
    return 0;
}