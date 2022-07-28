
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;

int removeLastTillOdd(vector<int>& array){
    int len = array.size();
    if(len == 1) return 0;

    for(int i = len-1; i > 0; i--){
        if(i == 0) return 0;
        if(array[i] % 2 == 1)
            return 1;
        else
            array.pop_back();
    }
    return 0;
}

int removeOdd(vector<int>& array){
    int len = array.size();
    if(len == 1) return 0;
    for(int i = 0; i<len-1; i++){
        if(i == 0 && array[1] == 0)
            continue;
        if(array[i] % 2 == 1){
            array.erase(array.begin()+i);
            return 1;
        }
    }  
    return 0;
}

void printArray(vector<int> array){
    int len = array.size();
    for(int i = 0; i<len; i++)
        cout << array[i];
}

int main(){
    int t, n;
    cin >> t;
    vector<int> digits;
    char token;

    for(int i = 0; i<t; i++){
        int digitsSum = 0;
        int digit;
        cin >> n;

        cin.clear();
        cin.ignore(1, '\n');

        while((token = fgetc(stdin)) != '\n'){
            digit = (int) token - 48;
            digitsSum += digit;
            digits.push_back(digit);
        }

        if( i > 0 ) cout << "\n";
        
        if(digits[digits.size()-1] % 2 != 0){
            if(digitsSum % 2 == 0){

                printArray(digits);
            }else{
                if(removeOdd(digits))
                    printArray(digits);
                else
                    cout << "-1";
            }
        }else{
            if(removeLastTillOdd(digits)){
                if(digitsSum % 2 != 0){
                    if(removeOdd(digits))
                        printArray(digits);
                    else
                        cout << "-1";
                }else
                     printArray(digits);            
            }else
                cout << "-1";
           
        }

        digits.clear();
    }


    return 0;
}
