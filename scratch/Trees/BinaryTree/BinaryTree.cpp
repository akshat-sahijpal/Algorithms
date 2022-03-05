//
// Created by Akshat on 03-03-2022.
//

#include "BinaryTree.h"

BNode *Btree::constructRandomTree() {
    BNode *a = new BNode("a");
    BNode *b = new BNode("b");
    BNode *c = new BNode("c");
    BNode *d = new BNode("d");
    BNode *e = new BNode("e");
    BNode *f = new BNode("f");
    BNode *g = new BNode("g");
    a->left = b;
    a->right = c;
    b->left = e;
    b->right = f;
    c->right = d;
    c->left = g;
    return a;
}

/**
 * DepthFirst Trav:
 *   in it the goal is to traverse the deepest node first
 *   the exploration starts from the root node and that root node is added to a stack
 *   since it is the first element then it is removed from the stack and is labelled as "current"
 *   when in "current" the childrens of that particular node are added to the stack: first the Right
 *   most child is added then the left most child.
 *   then the top most element from the stack is removed and placed under the label "current"
 *   the childrens of that "current" node are observed then
 * */
std::vector<char *> Btree::DepthTraversal(BNode *root) {
    if (root == nullptr) return std::vector<char *>();
    std::vector<char *> *traversedList = new std::vector<char *>();// List of visited nodes
    std::stack<BNode> *active_elements = new std::stack<BNode>(); // Stack in which the node is stored
    active_elements->push(*root); // init value of a stack
    while (active_elements->size() > 0) {
        BNode current_node = active_elements->top();
        active_elements->pop();
        traversedList->push_back(current_node.data);
        if (current_node.right != nullptr) active_elements->push(*current_node.right);
        if (current_node.left != nullptr) active_elements->push(*current_node.left);
    }
    return *traversedList;
}

std::vector<char *> Btree::RecurDepthTraversal(BNode *root) {
    std::vector<char *> *traversedList = new std::vector<char *>();
    traversedList->push_back(root->data);
    if (root == nullptr) return std::vector<char *>();
    auto leftSide = RecurDepthTraversal(root->left);
    auto rightSide = RecurDepthTraversal(root->right);
    /*std::merge(traversedList->begin(),
                      traversedList->end(),
                      leftSide.begin(), leftSide.end(),
                      rightSide.begin(), rightSide.end());*/
    return *traversedList;
}

/**
 * Checks for the level wise
 *    it first travs from root to the children of the root, from left to right at same level
 *    then at another level.
 *    It uses queue in the backend
 *    when traversal starts it goes from root, the root element
 *    is added to the queue now the front element is the root node
 *    then pop the front element from the queue into "current" state [a state in which the node is being explored]
 *    ["current": Node is being visited] look for the "current" states children and add them
 *    to the queue [from left to right] Now the front of the queue will be the left
 *    node.
 *    Repeat
 * */
std::vector<char *> Btree::BreathFirstTraversal(BNode *root) {
    if (root == nullptr) return std::vector<char *>();
    std::vector<char *> *traversedList = new std::vector<char *>();// List of visited nodes
    std::queue<BNode> *active_elements = new std::queue<BNode>(); // Queue in which the node is stored
    active_elements->push(*root);
    while (active_elements->size() > 0) {
        BNode current = active_elements->front();
        active_elements->pop();
        traversedList->push_back(current.data);
        if (current.left != nullptr) active_elements->push(*current.left);
        if (current.right != nullptr) active_elements->push(*current.right);
    }
    return *traversedList;
}
// unoptimized way
bool Btree::BFS_unopt(BNode *root, char* element) {
    if (root == nullptr) return false;
    auto breathTravList = BreathFirstTraversal(root);
    for(std::vector<char*>::iterator itr = breathTravList.begin();
        itr < breathTravList.end(); itr++){
        p(*itr)
        if(*itr == element){
            p("Found!!")
            return true;
        }
    }
    return false;
}

bool Btree::BFS_opt(BNode *root, char *element) {
    if (root == nullptr) return false;
    std::queue<BNode> *active_elements = new std::queue<BNode>(); // Queue in which the node is stored
    active_elements->push(*root);
    while (active_elements->size() > 0) {
        BNode current = active_elements->front();
        active_elements->pop();
        if(current.data == element){
            return true;
        }
        if (current.left != nullptr) active_elements->push(*current.left);
        if (current.right != nullptr) active_elements->push(*current.right);
    }
    return false;
}
