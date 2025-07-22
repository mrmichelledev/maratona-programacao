#include <bits/stdc++.h>
using namespace std;

vector <int> soma;

int main(){
    int t;
    cin >> t;

    while(t--){
        soma.clear();

        int n, k;
        cin >> n >> k;

        string v;
        cin >> v;

        soma.resize(n+1);

        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                if(v[i] == 'B')
                    soma[i] = 1;
                else
                    soma[i] = 0;

            } else{
                if(v[i] == 'B')
                    soma[i] = 1;
                else
                    soma[i] = 0;
            }
                
        }
    }

    return 0;
}