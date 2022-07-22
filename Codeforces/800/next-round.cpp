//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n, k, count = 0;
    fscanf(stdin, "%d %d", &n, &k);
    cin.clear();
    cin.ignore(1, '\n');

    string scoresStr;
    getline(cin, scoresStr);

    stringstream ss(scoresStr);

    int score;
    string scoreStr;
    vector<int> scores;

    while(getline(ss, scoreStr, ' ')){
        score = stoi(scoreStr);
        if(score > 0 && count < k)
            count++;
        scores.push_back(score);
    }    

    if(count == k){
        int kThScore = scores[k-1];
        for(int j = k; j<n; j++){
            if(scores[j] == kThScore)
                count++;
            else 
                break;
        }
    }

    cout << count;

    return 0;
}
