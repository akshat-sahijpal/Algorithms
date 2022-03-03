//
// Created by Akshat on 03-03-2022.
//

#ifndef STRUCTURES_BINARYTREE_H
#define STRUCTURES_BINARYTREE_H
#include <stack>
#include <algorithm>
#include <iostream>
#include<vector>
#define p(x) std::cout << x << std::endl;
class BNode{
public:
    char* data;
    BNode* left;
    BNode* right;
    BNode(char* data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
/**
 * Binary Tree can only have at most two children's
 * BTree can have a single node only
 * Btree can have exactly one path (One Way) to reach to a particular node
 * */
class Btree{
public:
    BNode* constructRandomTree();
    std::vector<char*> DepthTraversal(BNode* root);
    // Uses recursive approach to solve depth first
    std::vector<char*> RecurDepthTraversal(BNode* root);

};
#endif //STRUCTURES_BINARYTREE_H