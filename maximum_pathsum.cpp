#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
        Node *left, *right;
        int data;

        Node(int data) : left(nullptr), right(nullptr), data(data) {}
};


// function too find maximum path sum

int maxPathSum(Node* root, int &pathSum){
    if(root == nullptr) return 0;

    int left = maxPathSum(root->left, pathSum);
    int right = maxPathSum(root->right, pathSum);

    int got_the_sum = left + right + root->data;
    int sum_l_or_r = max(left, right) + root->data;
    int root_sum = root->data;

    pathSum = max({pathSum,got_the_sum, sum_l_or_r});
    return max(left, right) + root->data;
}

int main(){ 

    int pathSum = INT_MIN;

    Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    maxPathSum(root, pathSum);
    cout << "Maximum path sum is " << pathSum << endl; 
    return 0;
}