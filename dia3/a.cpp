#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, coordX[3], coordY[3], cX, cY;

    for(i = 0; i < 3; i++)
        cin >> coordX[i] >> coordY[i];
    
    //eixo x
    if(coordX[0] == coordX[1])
        cX = coordX[2];
    else if(coordX[0] == coordX[2])
        cX = coordX[1];
    else 
        cX = coordX[0];

    //eixo y
    if(coordY[0] == coordY[1])
        cY = coordY[2];
    else if(coordY[0] == coordY[2])
        cY = coordY[1];
    else 
        cY = coordY[0];

    cout << cX << " " << cY;

    return 0;
}