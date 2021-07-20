#include <iostream>
#include "..\lib\linkedBST.h"
using namespace std;

listNode* linkedBst::GetNewNode(int key, int value) {
	listNode* newNode = new listNode();
	newNode->data.key = key;
    newNode->data.value = value;
	newNode->left = newNode->right = NULL;
	return newNode;
}


listNode* linkedBst::min(listNode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}


listNode* linkedBst::add(listNode *root, int key, int value){
	if(root == NULL) { // empty tree
		root = GetNewNode(key, value);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(key <= root->data.key) {
		root->left = add(root->left, key, value);
	}
	// else, insert in right subtree. 
	else {
		root->right = add(root->right, key, value);
	}
	return root;
}


void linkedBst::Inorder(listNode *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<root->data.value<<endl;  //Print data
	Inorder(root->right);      // Visit right subtree
}


bool linkedBst::Search(listNode* root,int key) {
	if(root == NULL) {
		return false;
	}
	else if(root->data.key == key) {
		return true;
	}
	else if(key <= root->data.key) {
		return Search(root->left, key);
	}
	else {
		return Search(root->right, key);
	}
}


