//
// Created by Akshat on 03-02-2022.
//
#ifndef STRUCTURES_TREE_H
#define STRUCTURES_TREE_H


class Node{
public:
    int data;
    Node* lChild;
    Node* rChild;
    Node(int data){
        this->data = data;
        this->lChild = nullptr;
        this->rChild = nullptr;
    }
};
/**
 *  The height of a node is the number of edges from the node to the deepest leaf (ie. the longest path from the node to a leaf node).
 *  The depth of a node is the number of edges from the root to the node.
 *  degree of node is no of child nodes
 *  h = height of tree
 *  min nodes = h + 1;
 *  max nodes = exp(2, h+1) from GP series
 *  Max h = n - 1;
 *  Min h = log2(n+1)-1
 *  deg(0) = deg(2) + 1 [Always true in b.tree]
 *  b.tree = [Any node can have deg(0), deg(1), deg(2)]
 *  strict b.tree = [Any node can have deg(0), deg(2) only]
 *  n-ary trees = [Any node with deg 0, 1, 2, ..., n]
 *  Representation of b.tree (Array) : Parent = [i], L.child = [2*i], R.child = [2*i + 1]
 *  nulls in b.tree = node+1
 **/
class Tree{
public:
    void InOrder(Node* currentNode);
    void PreOrder(Node* currentNode);
    void PostOrder(Node* currentNode);
};
#endif