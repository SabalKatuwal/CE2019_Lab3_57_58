#include<iostream>
#include "arrayBST.h"
using namespace std;

int main()
{
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

    //a.exists(6);
    //a.DisplayArray();
    a.inorder();


    return 0;

}

