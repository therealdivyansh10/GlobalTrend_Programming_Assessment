#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

// Function to reverse the subarray or array  

void reverse(int *arr, int s, int e){
    while(e >= s){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

// Function to reverse the array elements in groups of k
void reverse_by_k(int arr[], int n, int k){
    k = k%n;
    if(k == 0) return ; 
    
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    reverse_by_k(arr, n , k);

    cout << "Rotated array by " << k << " elements: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}