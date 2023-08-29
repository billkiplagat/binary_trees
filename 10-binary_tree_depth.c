#include "binary_trees.h"
/**
* binary_tree_depth - calls recursive_depth to return the depth
* of a node in a binary tree
*
* @tree: tree
* Return: depth of the tree or 0 if tree is NULL;
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
size_t depth = 0;
while (tree->parent != NULL)
{
tree = tree->parent; /*Move up the tree towards the root*/
depth++;
}
return (depth);
}
