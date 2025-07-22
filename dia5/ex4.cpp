#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> sequencia, sequencia2;
    int i, num, temp;
    
    cin >> num;

    for(i = 0; i < num; i++){
        cin >> temp;
        sequencia.push_back(temp);
    }

    for(i = 0; i < num; i++){
        sequencia2 = sequencia;

        sequencia2.erase(sequencia2.begin() + i);

        sort(sequencia2.begin(), sequencia2.end());

        cout << sequencia2.back() << "\n";
    }

    return 0;
}