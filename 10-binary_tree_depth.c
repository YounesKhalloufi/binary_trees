#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: node to check the depth
 *
 * Return: 0 if it's the root otherwise number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
