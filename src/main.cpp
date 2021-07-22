<<<<<<< HEAD
#include <iostream>
#include "..\lib\linkedBST.h"
#include "arrayBST.h"
using namespace std;

//Driver:
int main(){
    //FOR LINKED BST
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

    //FOR ARRAY BST
    BSTusingArray a;
    a.add(10,50);
    a.add(4,51);
    a.add(20,52);
    a.add(2,53);
    a.add(6,54);
    a.add(15,55);
    int maxKey;
    a.max(maxKey);
    cout<<maxKey;

    int minKey;
    a.max(minKey);
    cout<<minKey;

    a.exists(6);
    a.DisplayArray();
    a.inorder();


    return 0;
}
=======




>>>>>>> arrayBST
