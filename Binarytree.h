#pragma once
#include <iostream>

struct Node
{
	int data;
	int counter;
	Node* left, * right;
};


struct BinaryTree
{
	Node* root = nullptr;
	int nodecount = 0;
};


void addToSubTree(Node*& node, Node* newnode);
void addToTree(BinaryTree& tree, int d);
void printSubTree(Node* node);
void printTree(BinaryTree& tree);
void printTreeStructure(BinaryTree& tree);
void printTreeStructure(BinaryTree& tree);
void printSubTreeStructure(Node* node,int depth,bool isRoot=false);
int searchInSubTree(Node* node, int d);
int searchInTree(BinaryTree& tree, int d);