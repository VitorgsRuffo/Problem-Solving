
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    string input;
    getline(cin, input);

    set<string> mySet;

    if(input.length() > 2){
        input[0] = ' ';
        input.erase(input.end()-1);

        stringstream ss(input);
        string token;

        while(getline(ss, token, ','))
            mySet.insert(token);
        
    }

    cout << mySet.size();

    return 0;
}