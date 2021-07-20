#pragma once

#include "interface.h"
#include <vector>

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


class linkedBst{
    public: 
        //linkedBst();
        //~linkedBst();
        listNode* min(listNode* root);
        listNode* add(listNode *root, int key, int value);
        listNode* GetNewNode(int key, int value);
        void Inorder(listNode *root);
        bool Search(listNode* root,int key);
        listNode *Delete(listNode *root, int key);
};



