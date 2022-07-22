
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t, n;
    cin >> t;
    vector<int> elements;

    for(int i = 0; i<t; i++){
        if(i > 0) cout << "\n";
        cin >> n;
        if((n/2) % 2 == 1)
            cout << "NO";
        else{
            cout << "YES\n";
            elements.push_back(2);
            int currentEven = 4;
            for(int j = 1; j<n/2; j++){
                elements.push_back(currentEven);
                if(j % 2 == 1)
                    currentEven += 4;
                else
                    currentEven += 2;
            }
            for(int j = 0; j<n/2; j += 2){
                elements.push_back(elements[j]-1);
                elements.push_back(elements[j+1]+1);
            }

            for(int j = 0; j<n; j++){
                if(j > 0) cout << " ";
                cout << elements[j];
            }
        }

        elements.clear();
    }

    return 0;
}
