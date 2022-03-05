//
// Created by Akshat on 03-03-2022.
//

#ifndef STRUCTURES_BINARYTREE_H
#define STRUCTURES_BINARYTREE_H
#include <stack>
#include <algorithm>
#include <iostream>
#include<queue>
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
    // Travs for the depth-wise
    std::vector<char*> DepthTraversal(BNode* root); // uses stack in the backend
    // Uses recursive approach to solve depth first
    std::vector<char*> RecurDepthTraversal(BNode* root);
    // Travs for the level-wise
    std::vector<char *> BreathFirstTraversal(BNode* root); // uses queue in the backend
    // Breath first search algo for searching an element in the tree
    bool BFS_unopt(BNode* root, char* element);
    bool BFS_opt(BNode* root, char* element);

};
#endif //STRUCTURES_BINARYTREE_H