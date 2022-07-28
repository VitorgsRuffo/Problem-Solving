
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        unsigned long long x, y;
        cin >> x >> y;

        if(i > 0) cout << "\n";
        if(x - y > 1) cout << "YES";
        else cout << "NO";
    }

    return 0;
}
