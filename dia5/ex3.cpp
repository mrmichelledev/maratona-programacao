#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, num;
    string temp;
    map <string, int> email;

    cin >> num;

    for(i = 0; i < num; i++){
        cin >> temp;

        if(email[temp] > 0)
            cout << temp << email[temp] << "\n";
        else
            cout << "OK\n";

        email[temp]++;
    }

    return 0;
}