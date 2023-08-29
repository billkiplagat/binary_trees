#include "binary_trees.h"
/**
* binary_tree_preorder - goes through a binary tree using
* pre-order traversal
*
* @tree: tree
* @func: pointer to a function
* Return: no return
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

/*Call the provided function for the current node's value*/
func(tree->n);

/*Recursively traverse the left subtree*/
binary_tree_preorder(tree->left, func);

/*Recursively traverse the right subtree*/
binary_tree_preorder(tree->right, func);
}
