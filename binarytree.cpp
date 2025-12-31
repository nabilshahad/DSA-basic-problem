#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data =val;
        left=right=NULL;
    }
};


static int idx=-1;
Node* buildTree(vector<int> preordered){
    idx++;
    if(preordered[idx]==-1){
        return NULL;
    }

    Node* root =new Node(preordered[idx]);
    root->left=buildTree(preordered);
    root->right=buildTree(preordered);
    return root;

}



void preOrder(Node* root){
    if(root ==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


void postOrder(Node* root){
    if(root== NULL){
        return;

    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}

int main(){

vector<int> preordered={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root =buildTree(preordered);
cout<<root->data<<endl;

cout<<root->left->data<<endl;

cout<<root->right->data<<endl;


Node* root =buildTree(preordered);
inOrder(root);
cout<<endl;
cout<<endl;
postOrder(root);

    return 0; 
  
}

