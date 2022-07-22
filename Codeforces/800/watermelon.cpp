//compiling command: g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>

using namespace std;


int main(){
    int w;
    scanf("%d", &w);
    if((w % 2 == 0) && w != 2) printf("YES");
    else printf("NO");

    return 0;
}
