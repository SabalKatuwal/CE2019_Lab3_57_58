#include <iostream>
#include "..\lib\linkedBST.h"
using namespace std;

//Driver:
int main(){
    linkedBst *tree;
    listNode *root = NULL;
    //Insertion
    root = tree->add(root, 0, 100);
    root = tree->add(root, 10, 80);
    root = tree->add(root, 13, 70);
    root = tree->add(root, 7, 120);
    root = tree->add(root, 2, 110);
    root = tree->add(root, 9, 130);

    //Traversal
    tree->Inorder(root);
    cout<<endl;

    //Search
    int key;
    cout<<"Enter the key you want to search: "<<endl;
    cin>>key;
    if(tree->Search(root,key) == true) cout<<"Found\n";
	else cout<<"Not Found\n"; 

    //Delete
    cout<<"Enter the key that you want to delete:"<<endl;
    cin>>key;
    root = tree->Delete(root, key);

    //search the key to verify deletion
    if(tree->Search(root,key) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

    //Traversal
    tree->Inorder(root);
    cout<<endl;
}