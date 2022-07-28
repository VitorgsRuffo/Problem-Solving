
//PS: compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int n;
    cin >> n;
    cin.clear();
    cin.ignore(1, '\n');

    vector<int> st;
    string input;
    getline(cin, input);
    stringstream ss(input);
    string token;
    while(getline(ss, token, ' '))
        st.push_back(stoi(token));

    sort(st.begin(), st.end());

    int counter = 2;    
    for(int i = 1; i<n; i++){
        if(st[0] == st[i]) counter++;
        else break;
    }
    if(counter == n+1){
        cout << "0";
    }else{

        for(int i = n-2; i>-1; i--)
            if(st[n-1] == st[i]) counter++;
        

        cout << n-counter;
    }

    return 0;
}




//time limit exceeded solution:

// int main(){
    
//     int n, sts = 0;
//     cin >> n;
//     cin.clear();
//     cin.ignore(1, '\n');

//     vector<int> st;
//     string input;
//     getline(cin, input);
//     stringstream ss(input);
//     string token;
//     while(getline(ss, token, ' '))
//         st.push_back(stoi(token));

//     sort(st.begin(), st.end());
    
//     int checker;
//     for(int i = 1; i<n-1; i++){
//         checker = 0;
        
//         for(int j = i-1; j>-1; j--){
//             if(st[i] == st[j]) continue;
//             else{
//                 checker++;
//                 break;
//             } 
//         }

//         for(int k = i+1; k<n; k++){
//             if(st[i] == st[k]) continue;
//             else{
//                 checker++;
//                 break;
//             } 
//         }
//         if(checker == 2) sts++;
//     }

//     cout << sts;

//     return 0;
// }

