//Basic template for a c++ program.

//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main(){
    
    int t;
    cin >> t;
    
    int n;
    vector<int> elements;
    
    for(int i = 0; i<t; i++){
        cin >> n;
        cin.clear();
        cin.ignore(1, '\n');
        
        string input;
        getline(cin, input);
        stringstream ss(input);
        string token;
        int tokenInt;
        while(getline(ss, token, ' ')){
            tokenInt = stoi(token);
            elements.push_back(tokenInt);
        }

        int even_count = 0, error_count = 0;
        for(int j = 0; j<n; j++){
            if(elements[j] % 2 == 0) even_count++;
            if(elements[j] % 2 != j % 2) error_count++;
        }

        if(t > 0) cout << "\n";

        if((n % 2 == 0 && n/2 == even_count) || (n % 2 == 1 && ceil(n/2.0) == even_count)){
            cout << error_count/2;

        }else{
            cout << "-1";
        }

        elements.clear();
    }

    return 0;
}
