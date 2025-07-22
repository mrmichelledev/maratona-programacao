#include <bits/stdc++.h>
using namespace std;

int main (){
    int t, n, s, i;
    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n >> s;
    
        long long int mediana = n - (n - 1) / 2;
        long long int l = 0;
        long long int r = s;
        long long int res = 0;

        while(l <= r){
            long long int mid = (l + r) / 2;

            if((mid * mediana) <= s){
                res = mid;
                l = mid + 1;
            }else
                r = mid - 1;
        }

        cout << res << "\n";

    }
        

    return 0;
}