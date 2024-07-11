#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// function to check if all the characters are  alphabets
bool check_alphabets(string str){
    for(char c : str){
        if(!isalpha(c)){
            return false;
        }
    }
    return true; 
}

int main(){
    string str = "asdga";

    bool are_alpha = check_alphabets(str);
    
    if(are_alpha){
        cout << "All characters in the string are alphabets." << endl;
    }else{
        cout << "Not all characters in the string are alphabets." << endl;
    }
    return 0;
}