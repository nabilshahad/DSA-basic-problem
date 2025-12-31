#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data =val;
        left=right= NULL;

    }


};
Node* buildTree(vector<int> &preorder){
    static int idx=-1;
    idx++;
    if(preorder[idx]==-1){
        return NULL;

    }


    Node* root = new Node(preorder[idx]);
    root->left =buildTree(preorder);
    root->right =buildTree(pre)
}