#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child.
 * @tree: pointer to the root node of the tree to count the nodes.
 * Return: number of nodes.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t right = 0, left = 0;

	if (!tree)
		return (0);

	right = binary_tree_nodes(tree->right);
	left = binary_tree_nodes(tree->left);

	if (tree->right != NULL || tree->left != NULL)
		return (right + left + 1);

	return (right + left);
}
