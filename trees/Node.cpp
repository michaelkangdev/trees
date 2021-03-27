#include "Node.h"


struct Node* createNode(int data)
{
	struct Node* n = new Node();

	n->data = data;
	n->left = nullptr;
	n->right = nullptr;

	return n;
}