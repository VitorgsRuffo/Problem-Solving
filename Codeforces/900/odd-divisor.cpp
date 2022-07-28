
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    unsigned long long n;

    cin >> t;

    for(int i = 0; i<t; i++){
        cin >> n;

        //applying fundamental theorem of arithmetic...
        while(n % 2 == 0)
            n /= 2;
        
        if(i > 0) cout << "\n";

        if(n == 1)
            cout << "NO";
        else
            cout << "YES";
    }

    return 0;
}
