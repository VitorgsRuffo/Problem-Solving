//Basic template for a c++ program.

//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    string input;
    getline(cin, input);

    stringstream ss(input);
    string integer;
    string fractional;
    getline(ss, integer, '.');
    getline(ss, fractional, ' ');

    if(integer[integer.length()-1] != '9'){
        if(fractional[0] >= '5')
            integer[integer.length()-1] += 1;
        cout << integer;

    }else{
        cout << "GOTO Vasilisa.";
    }

    return 0;
}
