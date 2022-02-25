//
// Created by Akshat on 03-02-2022.
//

#include "Tree.h"
#include <iostream>
#define print(x) std::cout << x << std::endl;
/** Traversal Order
 * Left Subtree -- Root -- Right Subtree
*/
void Tree::InOrder(Node* currentNode) {
    if(currentNode == nullptr) return;
    InOrder(currentNode->lChild);
    InOrder(currentNode->rChild);
}
/** Traversal Order
 * Root -- Left Subtree -- Right Subtree
 * */
void Tree::PreOrder(Node* currentNode) {
    if(currentNode == nullptr) return;
    InOrder(currentNode->lChild);
    InOrder(currentNode->rChild);
}
/** Traversal Order
 *  Left Subtree -- Right Subtree -- Root
 */
void Tree::PostOrder(Node* currentNode) {
    if(currentNode == nullptr) return;
    InOrder(currentNode->lChild);
    InOrder(currentNode->rChild);
}