//Basic template for a c++ program.

//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n, count = 0;
    int a, b, c;
    cin >> n;
    cin.clear();
    cin.ignore(1, '\n');
    for(int i = 0; i<n; i++){
        fscanf(stdin, "%d %d %d", &a, &b, &c);
        if(a+b+c > 1) count++;
    }
    cout << count;

    return 0;
}
