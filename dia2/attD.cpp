#include <bits/stdc++.h>
using namespace std;

int main(){
    int min, mm;

    cin >> min;


    if(min < 60){
        if (min-60 < 10)
            cout << "21:0" << min;
        else
            cout << "21:" << min;
    } else {
        if (min >= 10)
            cout << "22:" << min-60;
        else
            cout << "22:0" << min-60;
    }

    return 0;
}