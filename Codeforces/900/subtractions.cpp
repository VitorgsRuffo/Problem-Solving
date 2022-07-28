//Basic template for a c++ program.

//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(i > 0) cout << "\n";
        
        int g, l;
        if(a == b){
            cout << "1";
            continue;
        }else if(a > b){
            g = a;
            l = b;
        }else{
            g = b;
            l = a;
        }

        int div = g / l;
        int counter = div;
        int rem;
        while((rem = g % l) > 0){
            g = l;
            l = rem;
            counter += (g / l);
        }   

        cout << counter;

    }
    return 0;
}
