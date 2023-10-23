#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node* left;
    node* right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void levelOrder(node* root){
    if(root==NULL)
    return;
    queue<node*>pq;
    cout<<root->data<<" ";
    pq.push(root);
    while(!pq.empty()){
        node* n = pq.front();
        pq.pop();
        if(n->left!=NULL){
        cout<<n->left->data<<" ";
        pq.push(n->left);
        }
        if(n->right!=NULL){
            cout<<n->right->data<<" ";
        pq.push(n->right);
        }

    }
}
int postOrder(node* root){
    if(root==NULL)
    return 0;
    // cout<<root->data<<" ";
    if(root->left==NULL && root->right==NULL)
    return 1;
    
    return (postOrder(root->left) + postOrder(root->right));
    
}
int maxHei(node* root){
    if(root==NULL)
    return 0;
    return max(1+maxHei(root->left) , 1+ maxHei(root->right));
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right= new node(5);
    root->right->left = new node(6);
    //pre 1 2 3 4 5 6
    //in 3 2 4 1 6 5
    //post 3 4 2 6 5 1
    //level 1 2 5 3 4 6
    levelOrder(root);
    cout<<endl;
    return 0;
}