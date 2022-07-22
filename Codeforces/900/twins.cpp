
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
    vector<int> coins;
    int coin;
    int brotherCoinsSum = 0;
    
    while(getline(ss, token, ' ')){
        coin = stoi(token);
        coins.push_back(coin);
        brotherCoinsSum += coin;
    }
    
    sort(coins.begin(), coins.end());
    
    int myCoinsSum = 0;
    int myCoinsAmount = 0;

    for(int i = coins.size()-1; i>-1; i--){
        myCoinsSum += coins[i];
        myCoinsAmount++;
        brotherCoinsSum -= coins[i];
        if(myCoinsSum > brotherCoinsSum) break;
    }

    cout << myCoinsAmount;

    return 0;
}
