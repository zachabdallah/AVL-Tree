#include <iostream>
using namespace std;
#include "AVL.h"

int main() {
    AvlTree<int> avl;
    
    avl.insert(5);
    avl.insert(2);
    avl.insert(8);
    avl.insert(1);
    avl.insert(4);
    avl.insert(7);
    avl.insert(3);
    avl.insert(6);
    
    avl.findKey(1);
    avl.findKey(2);
    avl.findKey(3);
    avl.findKey(4);
    avl.findKey(5);
    avl.findKey(6);
    avl.findKey(7);
    avl.findKey(8);

    
    avl.remove(3);
    avl.printTree();

    return 0;
}
