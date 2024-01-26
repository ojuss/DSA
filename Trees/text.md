## 1. Trees
 Trees are abstract data structure that resembles a hierarchial structure or a tree like arrangements of elements. Trees are composed of nodes, where each node typically has zero or more child nodes, except for the root node, which has no parent.


## 2. Binary Tree
 A binary tree is a tree data structure in which each node can have at most two children, which are referred to as the left child and the right child.


## 3. Binary Search Tree
 In a BST, the values are organized in such a way that the left child of a node contains values less than the parent node, and the right child contains values greater than the parent node. Basically it is efficient for different operations.

## 4. create-binary-tree.cpp

![Alt text](image.png)

## 5. Traversing through a Tree
Two main algorithms to traverse through a tree: 
- DFS (Depth First Search): prioritizes depth search over breadth.
    - pre-order (data, left, right)
    - in-order (left, data, right)
    - post-order (left, right, data)


- BFS (Breadth First Search): prioritizes breadth search over depth.

## 6. Height and Depth of a binary tree

![Alt text](image-1.png)

__Height__ of the node is the longest path from the node to a leaf node.

__Depth__ of the node is the number of the edges from root to that node

 - Height of the tree with 1 node = 0
 - Height of the tree = height of the node

__Illustrations__
- (2) node has a height of 2 because it is 2 edges above the leaf node. 
- (2) node has depth of 1 because it edge below the root node


## 7. Delete a node in Binary Search Tree
To delete a node, we need to the remove the reference of the node to be deleted from its parents node and free the memory (to avoid memory leaks)
- __Case 1__
    - The process is easier when we want to delete the leaf node.


