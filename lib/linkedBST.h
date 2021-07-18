#pragma once

#include "interface.h"

struct listNode{
    Data data;
    listNode *left;
    listNode *right;
    listNode(int key, int value){
        data.key = key; 
        data.value = value; 
        left = nullptr;
        right = nullptr;
    }
    listNode(){
        data.key = 0; 
        data.value = 0; 
        left = nullptr; 
        right = nullptr;
    }
};


class linkedBst : AbstractBST{
    public: 
        //linkedBst();
        ~linkedBst();
        void min(int &output);
        listNode* insert(listNode *newNode, int key, int value);
        void inorder(listNode *root);
};



