
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n, l, r, mins = 0, maxs = 0, minElement = 1, maxElement = 1;
    cin >> n >> l >> r;

    for(int i = 1; i<=n; i++){
        
        if(i <= n-(l-1))
            mins +=1;
        else{
            minElement *= 2;
            mins += minElement;
        }

        maxs += maxElement;
        if(i<r)
            maxElement *=2;
    }

    cout << mins << " " << maxs;

    return 0;
}
