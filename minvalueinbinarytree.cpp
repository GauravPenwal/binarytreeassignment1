#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
class Node {
public:
int data;
Node *left, *right;
Node(int data){
this->data = data;
this->left = NULL;
this->right = NULL;
}
};
void inorder(Node * root,vector<int>&ans){
if(root==NULL)return ;
    inorder(root->left,ans);
    //cout<<root->data<<" ";
    ans.push_back(root->data);
    inorder(root->right,ans);
    }


    vector<int> inorderTraversal(Node* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }

int findMin(Node* root,vector<int>&ans){
sort(ans.begin(),ans.end());
return ans[0];
}

int main(){
Node* NewRoot = NULL;
Node* root = new Node(2);
root->left = new Node(7);
root->right = new Node(5);
root->left->right = new Node(6);
root->left->right->left = new Node(1);
root->left->right->right = new Node(11);
root->right->right = new Node(9);
root->right->right->left = new Node(4);
vector<int>ans;
inorder(root,ans);
cout << "Minimum element is " << findMin(root,ans) << endl;
return 0;
}