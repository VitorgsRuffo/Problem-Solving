
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){

    string remix;
    getline(cin, remix);

    size_t position;

    while((position = remix.find("WUB")) != string::npos){
        remix[position+2] = ' ';
        remix.erase(position, 2);
    }


    for(int i = 0; i<remix.length(); i++){
        if(remix[i] == ' ')
            while(remix[i+1] == ' ')
                remix.erase(i+1, 1);
    }
        
    if(remix[0] == ' ') remix.erase(0, 1);
    if(remix[remix.length()-1] == ' ') remix.erase(remix.length()-1, 1);

    cout << remix;

    return 0;
}
