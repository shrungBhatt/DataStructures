#include <iostream>
#include "binary_tree.hpp"
using namespace std;

int main() {
    
    int count[] = {8,3,10,1,6,9,14};
    BinaryTree binaryTree;
    binaryTree.setElements(count);
    cout << binaryTree.doesTreeContainsElement(0,14,7) << endl;
    return 0;
}
