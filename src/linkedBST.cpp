#include <iostream>
#include "..\lib\linkedBST.h"

void linkedBst::min(int &output){

}

listNode* linkedBst::insert(listNode *root, int key, int value){
    
    if (!root){
        return new listNode(key, value);
    }

    if (key > root->data.key){ //If inserted key is greater than root.
        root->right = insert(root->right, key, value);
    }
    else{
        root->left = insert(root->left, key, value);
    }
    return root;
}

void linkedBst::inorder(listNode *root){
    if (!root){
        return;
    }
    inorder(root->left);
    std::cout<<root->data.key<<" : "<<root->data.value<<std::endl;
    inorder(root->right);
}