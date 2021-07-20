#include <iostream>
#include "..\lib\linkedBST.h"
using namespace std;

//Driver:
int main(){
    linkedBst tree;
    listNode *root = NULL;
    root = tree.add(root, 0, 100);
    root = tree.add(root, 1, 80);
    root = tree.add(root, 2, 70);
    root = tree.add(root, 3, 120);
    root = tree.add(root, 4, 110);
    root = tree.add(root, 5, 130);

    //tree->Inorder(root);
    int key;
    cout<<"Enter the key you want to search: "<<endl;
    cin>>key;
    cout<<tree.Search(root, key);
}