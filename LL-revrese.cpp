// Approach 1

#include <iostream>
using namespace std;

class Node{
    public:
        Node* next;
        int data;

        Node(int data) : data(data), next(nullptr) {}
};

// approach1 

// Node* reverse_LL(Node* root){
//     Node* curr = root;
//     Node* prev = nullptr;
//     Node* nextptr = root->next;
    
//     while(curr && nextptr){
//         curr->next = prev;
//         prev = curr;
//         curr = nextptr;
//         nextptr = nextptr->next;
//     }
    
//     curr->next = prev;
//     return curr;
// }


// approach 2
 
Node* reverse_LL(Node* curr, Node* prev){
    if(curr == nullptr) return prev; 

    Node* nextNode = curr->next;
    curr->next = prev;
    return reverse_LL(nextNode, curr);
}

void traverse_LL(Node* root){
    while(root){
        cout << root->data << "->";
        root = root->next;
    }
    cout<<"NULL";
    return ;
}

int main(){
    Node* root = new Node(1);
    root->next = new Node(2);
    root->next->next = new Node(3);
    root->next->next->next = new Node(4);
    root->next->next->next->next = new Node(5);         // created a LL 1->2->3->4->5
    root = reverse_LL(root, nullptr);
    traverse_LL(root);
    return 0;
}