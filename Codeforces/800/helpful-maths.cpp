
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    string input;
    getline(cin, input);

    stringstream ss(input);
    string token;
    vector<string> tokens;
    while(getline(ss, token, '+'))
        tokens.push_back(token);
    
    sort(tokens.begin(), tokens.end());
    
    cout << tokens[0];
    tokens.erase(tokens.begin());
    for(auto token : tokens)
        cout << "+" << token;

    return 0;
}
