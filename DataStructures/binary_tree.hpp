#ifndef binary_tree_hpp
#define binary_tree_hpp

#include <stdio.h>

class BinaryTree{
private:
    int* elements;
public:
    void setElements(int*);
    int* getElements();
    bool doesTreeContainsElement(int,int,int);
    int getLeftChild(int);
    int getRightChild(int);
};
#endif
