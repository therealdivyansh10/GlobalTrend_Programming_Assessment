#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


// function to find max difference between two numbers
int find_max_diff(vector<int>nums){

    sort(nums.begin(), nums.end());

    int max_diff = nums[nums.size() - 1] - nums[0];

    return max_diff ;
}

int main(){
    vector<int> nums = {5, 3, 8, 2, 1, 9, 4, 6, 7};
    cout<<"the maximum difference between two nums is: "<<find_max_diff(nums);
    return 0;
}