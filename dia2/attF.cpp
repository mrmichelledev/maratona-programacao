#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int i, n = 1, x;

    cin >> x;

    for(i = 2; i < 3000000000000000000; i++){
        if((n *= i) == x){
            cout << i;
            return 0;
        }
    }

   

    return 0;
}