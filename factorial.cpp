#include <bits/stdc++.h>

using namespace std;


// function to find factorial of a number
int factorial(int n){
    int fact = 1;
    if(n == 0 || n == 1) return 1;

    for(int i = 2 ; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n = 5;

    cout<<"factorial of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}