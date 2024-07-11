#include <bits/stdc++.h>
using namespace std;


// Function to find GCD using Euclidean algorithm
int find_gcd(int a, int b){
    if(b == 0)
        return a;
    return find_gcd(b, a % b);
}

int main(){

    int a = 12, b = 54; 
    
    cout<<"Greatest common divisor of "<<a<<" and "<<b<<" is: "<<find_gcd(a, b)<<endl;
    return 0;
}