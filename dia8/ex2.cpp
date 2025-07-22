#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int tempRes = 240 - k;

    int l = 0;
    int r = n;

    int mid, tempUsa, questoes = 0;

    while(l <= r){
        mid = (l + r) / 2;
        tempUsa = 5 * mid * (mid + 1) / 2;
        
        if(tempUsa <= tempRes){
            questoes = mid;
            l = mid + 1;
            cout << "l = " << l << ", questoes = " << questoes << "\n";

        } else {
            r = mid - 1; 
            cout << "r = " << l << ", questoes = " << questoes << "\n"; 
        }  
    }

    cout << questoes;

    return 0;
}