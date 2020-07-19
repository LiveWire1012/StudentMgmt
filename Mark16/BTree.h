#pragma once

#include "BtreeNode.h"

class BTree
{
private:
	BTreeNode* root; // Pointer to root node 
    int t;  // Minimum degree 
public:

	BTree(int _t) 
    { 
        root = NULL; 
        t = _t; 
    } 
  
    void traverse() 
    { 
        if (root != NULL) root->traverse(); 
    } 
  
    // function to search a key in this tree 
    BTreeNode* search(int k) 
    { 
        return (root == NULL)? NULL : root->search(k); 
    }

    // The main function that inserts a new key in this B-Tree 
    void insert(int k); 
  
    // The main function that removes a new key in thie B-Tree 
    void remove(int k);
};

