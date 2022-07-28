//Basic template for a c++ program.

//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main(){
    
    unsigned long long n, k, oddsAmount, number;
    cin >> n >> k;

    oddsAmount = (unsigned long long) ceil(n/2.0);

    if(k > oddsAmount){
        k -= oddsAmount;
        cout << 2*k;
    }else{
        cout << 2*(k-1)+1;
    }

    return 0;
}
