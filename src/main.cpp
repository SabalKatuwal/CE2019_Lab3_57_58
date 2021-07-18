#include <iostream>
#include "..\lib\linkedBST.h"


//Driver:
int main(){
    linkedBst *tree;
    listNode *root = NULL;
    tree->insert(root, 0, 100);
    tree->insert(root, 1, 80);
    tree->insert(root, 2, 70);
    tree->insert(root, 3, 120);
    tree->insert(root, 4, 110);
    tree->insert(root, 5, 130);

    tree->inorder(root);
}