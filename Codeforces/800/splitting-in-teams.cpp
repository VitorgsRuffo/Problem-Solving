
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    cin >> n;
    cin.clear();
    cin.ignore(1, '\n');

    string input;
    getline(cin, input);
    stringstream ss(input);
    string token;
    int twos = 0, ones = 0;

    while(getline(ss, token, ' ')){
        if(token[0] == '2') twos++;
        else ones++;
    }

    int diff = twos - ones;
    if(diff == 0){
        cout << twos;

    }else if(diff < 0){
        cout << twos + (ones-twos)/3;

    }else{
        cout << ones;
    }

    return 0;
}
