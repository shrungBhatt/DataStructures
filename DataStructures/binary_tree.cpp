#include "binary_tree.hpp"
#include<iostream>
using namespace std;

void BinaryTree::setElements(int* array){
    elements = array;
}

int* BinaryTree::getElements(){
    return elements;
}

bool BinaryTree::doesTreeContainsElement(int root, int value, int lengthOfArray)
{
    int elementValue = elements[root];
    if(root > lengthOfArray){
        return false;
    }else if(elementValue == value){
        return true;
    }else if(value < elementValue){
        int leftChild = getLeftChild(root);
        return this->doesTreeContainsElement(leftChild, value, lengthOfArray);
    }else {
        int rightChild = getRightChild(root);
        return this->doesTreeContainsElement(rightChild, value, lengthOfArray);
    }
}

int BinaryTree::getLeftChild(int root){
    return ((2*root)+1);
}

int BinaryTree::getRightChild(int root){
    return ((2*root)+2);
}

