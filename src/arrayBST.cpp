#include <iostream>
#include "arrayBST.h"
using namespace std;



BSTusingArray::BSTusingArray()
{
    for(int i=0; i < MAX_NODE; i++)
    {
        nodes[i]=NULL;
    }
}


bool BSTusingArray::isEmpty()
{
    if(nodes[1]== NULL)
    {
        return true;
    }
    else
    {return false;}
}



void BSTusingArray::add(int key, int value)
{
    ArrayNode *p= new ArrayNode(key,value);

    if(isEmpty())
    {
        nodes[1]= p;
        return;
    }
    for(int i=1; i<MAX_NODE;)
    {
        if(nodes[i]==NULL)
        {
            nodes[i]=p;
            break;
        }
        else if(nodes[i]->key<key)
        {
            i=2*i;
        }
        else{
            i=(2*i)+1;
        }
    }
}


// void BSTusingArray::remove(int keyToDelete)
// {
//     //ArrayNode *p= new ArrayNode(key,value);

//     if(isEmpty())
//     {
//         cout<<"tree is empty";
//         return;
//     }
//     if (keyToDelete<root->key)




// }



void BSTusingArray::max(int &output)
{
    if(isEmpty())
    {
        cout<<"No key entered";
    }
    for(int i=1; i<MAX_NODE;)
    {
        if(nodes[i]==NULL)
        {
            i =i%2;  //gives parent
            output= nodes[i]->key;
            break;
        }
        else{
            i=(2*i)+1;  //right subtree
        }
    }
}
void BSTusingArray::min(int &output)
{
    if(isEmpty())
    {
        cout<<"No key entered";
    }
    for(int i=1; i<MAX_NODE;)
    {
        if(nodes[i]== NULL)
        {
            i=i/2;  //gives the parent index
            output=nodes[i]->key;
            break;
        }
        else
        {
            i=i*2;
        }
    }
}

bool BSTusingArray::exists(int targetKey)
{
    if(isEmpty())
    {
        cout<<"tree empty";
    }
    for(int i=1; i<MAX_NODE;i++)
    {
        if(nodes[i]->key == targetKey)
        {
            return true;
        }
        else{
            return false;
        }
    }
}

// void BSTusingArray::inorder(struct ArrayNode *root)
// {
//     if (isEmpty())
//     {
//         cout<<"empty";
//     }
//     inorder(root->left);

//     printf("%d",root->key);

//     inorder(root->right);
// }

int BSTusingArray::DisplayArray()
{
    for(int i = 0; i < MAX_NODE; i++)
    {
        if(nodes[i] != '\0')
            cout << nodes[i];
        else
            cout << "_";
    }
    return 0;
}
 