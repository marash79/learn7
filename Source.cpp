#include <iostream>
#include"Binarytree.h"

int main()
{
	int n;
	int d;
	BinaryTree tree;
	scanf_s("%i", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%i", &d);
		addToTree(tree, d);
	}
	printf("\n\n");
	printTree(tree);
	printf("\n\n");
	/*scanf_s("%i", &d);
	int res = searchInTree(tree,d);*/
	printTreeStructure(tree);
	printf("\n\n");

	return 0;
}