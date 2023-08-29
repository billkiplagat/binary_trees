#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves in a binary tree
*
* @tree: tree
* Return: number of leaves in a the tree or 0 if tree is NULL;
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL) {
return (0);
}
if (tree->left == NULL && tree->right == NULL) {
return 1;
}
/* Recursively count the leaves in the left and right subtrees
then sum and return */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
