#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 *
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grand_pa;
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
grand_pa = node->parent->parent;
if (grand_pa->left == NULL || grand_pa->right == NULL)
return (NULL);
if (node->parent == grand_pa->left)
return (grand_pa->right);
else
return (grand_pa->left);
}
