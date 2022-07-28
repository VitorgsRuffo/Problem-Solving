
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main(){
    
    int t, n, k, e;
    cin >> t;
    vector<int> elements;
    for(int i = 0; i<t; i++){
        cin >> n >> k;
        int nk = n*k;
        for(int j = 0; j<nk; j++){
            cin >> e;
            elements.push_back(e);
        }
        
        int front, back;
        if(n % 2 == 0){
            front = n/2;
            back = front-1;
        }else{
            front = (n-1)/2;
            back = front;
        }

        unsigned long long sum = 0;
        int jump = front+1;
        for(int j = k*back; j<nk; j += jump)
            sum += elements[j];

        if(i > 0) cout << "\n";
        cout << sum;

        elements.clear();
        
    }

    return 0;
}
