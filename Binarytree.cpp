
#include "Binarytree.h"


void addToSubTree(Node*& node, Node* newnode)
{
	if (node == nullptr)
	{
		node = newnode;
		return;
	}
	if (newnode->data == node->data)
	{
		node->counter ++;
		free(newnode);
		return;
	}
	if (newnode->data < node->data)
		addToSubTree(node->left, newnode);
	else
		addToSubTree(node->right, newnode);
}
void addToTree(BinaryTree& tree, int d)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = d;
	node->counter = 1;
	node->left = node->right = nullptr;
	addToSubTree(tree.root, node);
}
void printSubTree(Node* node)
{
	if (node == nullptr)
		return;
	printSubTree(node->left);
	printf(" %i",node->data);
	if (node->counter > 1)
		printf("x%i", node->counter);
	printSubTree(node->right);
}
void printTree(BinaryTree& tree)
{
	printSubTree(tree.root);
}
void printTreeStructure(BinaryTree& tree)
{
	printSubTreeStructure(tree.root, 0);
}
void printSubTreeStructure(Node* node, int depth, bool isRoot)
{
	if (node == nullptr)	return;
	if (isRoot)
		printf("%2d\n", node->data);
	else
	{
		for (int i = 0; i < depth; i++)
			printf("|  ");
		printf("\b\b--%2d\n", node->data);
	}
	printSubTreeStructure(node->left, depth + 1);
	printSubTreeStructure(node->right, depth + 1);
}
int searchInTree(BinaryTree& tree, int d)
{
	return searchInSubTree(tree.root,d);
}
int searchInSubTree(Node* node, int d)
{
	if (node == nullptr)
		return 0;
	if (node->data == d) return node->counter;
	if (d < node->data)
		return searchInSubTree(node->left, d);
	else
		searchInSubTree(node->right, d);

};
