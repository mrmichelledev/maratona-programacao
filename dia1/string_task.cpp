#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt;
    string v = "AOYEUIaoyeui";
    int i, j;

    cin >> txt;

    for(i = 0; i < txt.length(); i++){
        for(j = 0; j < v.length(); j++){
            if(txt[i] == v[j]) {
                txt.erase(i, 1);
                i--;
            }
        }
    }

    for(i = 0; i < txt.length(); i++)
        cout << "." << (char) tolower(txt[i]);

    return 0;
}