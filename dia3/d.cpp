#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b){
    return a.size() < b.size();
}

int main(){    
    string newWord;
    int n, i;

    cin >> n;
    vector <string> word(n);

    for(i = 0; i < n; i++)
        cin >> word[i];

    sort(word.begin(), word.end(), cmp);
    // cmp = funcao para comparar

    for(i = 0; i < n; i++)
        newWord += word[i];

    cout << newWord;
    
    return 0;
}