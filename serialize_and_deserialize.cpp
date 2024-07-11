#include <iostream>
#include <sstream>
#include <queue>
#include <string>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "#";
        
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> nodes;
        string node;
        istringstream ss(data);
        
        while (getline(ss, node, ',')) {
            nodes.push(node);
        }
        
        return deserializeHelper(nodes);
    }

private:
    TreeNode* deserializeHelper(queue<string>& nodes) {
        string val = nodes.front();
        nodes.pop();
        
        if (val == "#") return NULL;
        
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(nodes);
        root->right = deserializeHelper(nodes);
        
        return root;
    }
};

// Helper function to print tree in inorder traversal for testing
void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main() {
    // creating a tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec codec;
    string serialized = codec.serialize(root);
    cout << "Serialized tree: " << serialized << endl;

    TreeNode* deserializedRoot = codec.deserialize(serialized);
    cout << "Inorder traversal of deserialized tree: ";
    inorder(deserializedRoot);
    cout << endl;

    return 0;
}
