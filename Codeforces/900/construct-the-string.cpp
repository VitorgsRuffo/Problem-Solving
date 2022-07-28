
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int t, n, a, b;
    cin >> t;
    cin.clear();
    cin.ignore(1, '\n');
    string answer;

    for(int i = 0; i<t; i++){
        fscanf(stdin, "%d %d %d", &n, &a, &b);
        
        char currentChar = 'a';
        int charIndex = 1;
        for(int j = 0; j<n; j++){
            answer.push_back(currentChar);
            charIndex++;
            currentChar += 1;
            if(charIndex > b){
                charIndex = 1;
                currentChar = 'a';
            }
        }
        
        if(i > 0) cout << "\n";
        cout << answer;
        answer.clear();
    }

    return 0;
}
