#include <bits/stdc++.h>
using namespace std;

int main(){
    vector < pair <int, int> > chefs;
    int i, num, x, y;

    cin >> num;

    for(i = 0; i < num; i++){
        cin >> x >> y;
        chefs.push_back({x, y});
    }

    for(i = 0; i < num; i++)
        cout << chefs[i].first << " " << chefs[i].second << "\n";

    return 0;
}