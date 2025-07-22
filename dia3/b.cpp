#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    int i, hitachi;

    cin >> word;

    for(i = 0; i < word.size(); i+=2){
        if(word[i] == 'h' && word[i+1] == 'i')
            hitachi = 1;
        else {
            hitachi = 0;
            break;
        }
    }

    if(hitachi)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}