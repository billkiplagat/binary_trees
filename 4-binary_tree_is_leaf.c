#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
*
* @node: pointer to the node
* Return: 1 if node is a leaf, otherwise 0
* a leaf is a node that does not have any children.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
int leaf = 0;
if (node && !(node->left) && !(node->right))
leaf = 1;

return (leaf);
}
