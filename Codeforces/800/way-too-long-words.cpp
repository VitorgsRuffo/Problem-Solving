//compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>


using namespace std;


int main(){

    int n;
    string str;
    cin >> n;
    cin.clear();
    cin.ignore(1, '\n');
    for(int i = 0; i<n; i++){
        if(i > 0) cout << "\n";
        getline(cin, str);
        if(str.length() > 10)
            cout << str[0] << (str.length()-2) << str[str.length()-1];
        else
            cout << str;
    }

    return 0;
}