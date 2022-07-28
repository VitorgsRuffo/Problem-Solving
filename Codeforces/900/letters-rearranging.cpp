
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string input){
    int i = 0, j = input.length()-1;
    while(i < j){
        if(input[i] != input[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main(){
    int t;
    string input;
    cin >> t;
    cin.clear();
    cin.ignore(1, '\n');
    for(int i = 0; i<t; i++){
        getline(cin, input);

        if(i > 0) cout << "\n";
        
        if(!isPalindrome(input)){
            cout << input;
        }else{
            int len = input.length();
            string answer = "-1";
            for(int j = 1; j<len; j++){
                if(input[0] != input[j]){
                    char temp = input[0];
                    input[0] = input[j];
                    input[j] = temp;
                    answer = input;
                    break;
                }
            }
            cout << answer;
        }
    }

    

    return 0;
}
