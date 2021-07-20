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

    // if(isEmpty())
    // {
    //     nodes[1]= p;
    //     return;
    // }
    for(int i=1; i<MAX_NODE;)
    {
        if(nodes[i]==NULL)
        {
            nodes[i]=p;
            break;
        }
        else if(nodes[i]->key>key)
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
//     if(exists(keyToDelete))
//     {
//         int node=1;
//         while (nodes[node]->key!=keyToDelete && nodes[node]!= NULL)
//         {
//             if (nodes[node]->key<keyToDelete)
//             {
//                 node= node*2;
//             }
//             else
//             {
//                 node= (node*2)+1;
//             }
//         }

//         //keyToDelete is in leaf
//         if(nodes[node*2]==NULL && nodes[(node*2)+1]==NULL)
//         {
//             nodes[node]=NULL;
//         }

//         //keyToDelete has one childi
//         else if(nodes[node*2]==NULL || nodes[(node*2)+1]==NULL)
//         {
//             if(nodes[node*2]!= NULL)
//             {
//                 arrange(node*2);
//             }
//             else
//             {
//                 arrange(node*2+1);
//             }
//         }
//         //keyToDelete has two subtrees
//         else
//         {
//             int nodeRight=node*2+1;
//             while(nodes[(nodeRight*2)] != NULL)
//             {
//                 nodeRight = nodeRight*2;
//             }
//             nodes[node]=nodes[nodeRight];


//         }
//     }




// }



void BSTusingArray::max(int &output)
{
    if(isEmpty())
    {
        cout<<"No key entered";
    }
    for(int i=1; i<MAX_NODE;i=2*i+1)
    {
        if(nodes[i]==NULL)
        {
            i =i/2;  //gives parent
            output= nodes[i]->key;
            break;
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

void BSTusingArray::inorder(int index)
{
    if (nodes[index]==NULL)
    {
        return;
    }
    inorder(index*2);

    cout<<nodes[index]->key<<" ";

    inorder(index*2+1);
}

bool BSTusingArray::inorder()
{
    inorder(1);
    
}


int BSTusingArray::DisplayArray()
{
    for(int i = 0; i < MAX_NODE; i++)
    {
        if(nodes[i] != '\0')
            cout << nodes[i]->key;
        else
            cout << "_";
    }
    return 0;
}
 