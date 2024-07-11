#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// function to find sum of digits
int find_sum(int n){
    if(n == 0) return 0;

    int s = 0;
    while(n != 0){
        s += n%10;
        n /= 10;
    }
    return s;
}

int main(){
    int n = 1234;

    cout<<"the sum of digits of number "<<n<<" is "<<find_sum(n);
    return 0;
}