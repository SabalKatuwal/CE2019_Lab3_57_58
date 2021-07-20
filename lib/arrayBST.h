#pragma once
#include "interface.h"
#define MAX_NODE 50


class ArrayNode
{
    int key;
    int value;
    ArrayNode(int key, int value):key(key), value(value) {}
};

class BSTusingArray:public AbstractBST
{
    private:
    ArrayNode* nodes[MAX_NODE];

    public:
    BSTusingArray();
    ~BSTusingArray();
    bool isEmpty();
    void add(int key, int value);
    void max(int &output);
    void min(int &output);
    //void remove(int keyToDelete);
    bool exists(int targetKey);
    //void inorder();
    int DisplayArray();
    
};
