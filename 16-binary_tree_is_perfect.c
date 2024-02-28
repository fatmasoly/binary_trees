#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t l_height, r_height;

if (tree == NULL)
return (0);

l_height = binary_tree_height(tree->left);
r_height = binary_tree_height(tree->right);
if (l_height != r_height)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if @tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l_height, r_height = 0;
if (tree == NULL)
return (0);
l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((l_height > r_height) ? l_height : r_height);
}
