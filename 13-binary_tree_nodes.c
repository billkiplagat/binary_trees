#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
*
* @tree: tree
* Return: number of parent nodes in a the tree or 0 if tree is NULL;
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
size_t has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
return has_child + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}