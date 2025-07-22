#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, num;
    string temp;
    map <string, int> freq;

    cin >> num;

    for(i = 0; i < num; i++){
        cin >> temp;
   
        if(freq[temp] > 0)
            cout << "YES\n";
        else   
            cout << "NO\n";

        freq[temp]++;
    }

    return 0;
}