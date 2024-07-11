#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// approach using unordered_map

// int maxSubstr(string str, int n ){

//     unordered_map<char, int> map;
//     int max_len = 0; 
//     int l = 0 , r = 0;                     

//     while (r < n) {
//         if (map.find(str[r]) != map.end() && map[str[r]] >= l) {
//             l = map[str[r]] + 1;
//         }

//         map[str[r]] = r;
//         max_len = std::max(max_len, r - l + 1);
//         r++;
//     }

//     return max_len;
// }

// approach 2 using frequence array

int maxSubstr(string str, int n){
    int max_len = 0;
    int count[26] = {0};
    
    int l = 0, r = 0; 
    
    while (r < n) {
        if (count[str[r] - 'a'] > 0) {
            l = max(l, count[str[r] - 'a'] + 1);
        }
        
        count[str[r] - 'a'] = r + 1;
        max_len = max(max_len, r - l + 1);
        r++;
    }
    return max_len;
}


int main(){
    string str = "abcabcabc";
    int n = str.length();

    cout<<"maximum length of the substring without repeating chars. is :"<<maxSubstr(str, n);
    return 0;
}